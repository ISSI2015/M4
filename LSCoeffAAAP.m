function erg = LSCoeffAAAP( TR_D )
% Computes the matrix B of dimension n x n for n/2 points in the mesh, 
% which is the coeffizient matrix of the linear system of equations that
% arises from determining a zero gradient for the energy functional of 
% AAAP, which is equivalent to find a minimum or maximum.
% For given constraints, remove the corresponding "=0"-equations and append 
% the given "=x"-conditions as new equations.

points = TR_D.Points;
pointsTrans = points' ;
n = 2*length(points); % number of constraint variables; dimension of erg should be n x n
erg(n,n) = 0; % initialise result variable
connects = TR_D.ConnectivityList;
areas = triangareavector(TR_D); % pre-compute the areas
areas = areas / sum(areas);
% iterate over all inner edges / pairs of adjacent triangles
trianglepairs = edgeAttachments(TR_D, TR_D.edges); % all edges
for i= 1 : size(trianglepairs, 1)
    if(length(trianglepairs{i}) == 2)
    % if it is 1, the edge is an outer edge which should not be regarded
           triang1 = trianglepairs{i}(1);
           triang2 = trianglepairs{i}(2);
        % P is the three point's coordinates, written as column vectors
        P1 = pointsTrans ( :, connects(triang1, :) ); 
        P2 = pointsTrans ( :, connects(triang2, :) );
        
        % add 1 1 1 row
        P1(3, :) = [1 1 1];
        P2(3, :) = [1 1 1];
        
        % invert
        P1 = inv(P1);
        P2 = inv(P2);
        
        % cut the 3rd column, as that omits the translation vector in A
        P1(:, 3) = [];
        P2(:, 3) = [];
        
        % now we have P 1 tilda inv tilda!
        % generate 2x2-Matrix M, N of linear polynomials
        % initianisation
        % Here's the mistake! M and N are not initialized by 0 each
        % iteration
        %M11(n) = 0; M12(n) = 0; M21(n) = 0; M22(n) = 0;
        %N11(n) = 0; N12(n) = 0; N21(n) = 0; N22(n) = 0;
        M11 = zeros(1,n); M12 = zeros(1,n); M21 = zeros(1,n); M22 = zeros(1,n); 
        N11 = zeros(1,n); N12 = zeros(1,n); N21 = zeros(1,n); N22 = zeros(1,n);
        
        M11( connects(triang1, 1) *2-1 ) = P1(1, 1); 
            % explanation: M11 is the upper-left cell in the matrix
            % resulting from U * P1. This means that we need to add P1(1,1)
            % to the coefficient before the variable which is written
            % top-left in U, which is corresponding to the x-coodinate (so *2-1) of
            % the first vertex of triang1
        M11( connects(triang1, 2) *2-1 ) = P1(2, 1);
        M11( connects(triang1, 3) *2-1 ) = P1(3, 1);
        
        % other polynomials similarly
        M12 ( connects(triang1,1) *2-1 ) = P1(1, 2);
        M12( connects(triang1, 2) *2-1 ) = P1(2, 2);
        M12( connects(triang1, 3) *2-1 ) = P1(3, 2);
        
        M21 ( connects(triang1,1) *2 ) = P1(1, 1);
        M21( connects(triang1, 2) *2 ) = P1(2, 1);
        M21( connects(triang1, 3) *2 ) = P1(3, 1);
        
        M22 ( connects(triang1,1) *2 ) = P1(1, 2);
        M22( connects(triang1, 2) *2 ) = P1(2, 2);
        M22( connects(triang1, 3) *2 ) = P1(3, 2);
        
        
        N11( connects(triang2, 1) *2-1 ) = P2(1, 1); 
        N11( connects(triang2, 2) *2-1 ) = P2(2, 1);
        N11( connects(triang2, 3) *2-1 ) = P2(3, 1);
        
        N12 ( connects(triang2,1) *2-1 ) = P2(1, 2);
        N12( connects(triang2, 2) *2-1 ) = P2(2, 2);
        N12( connects(triang2, 3) *2-1 ) = P2(3, 2);
        
        N21 ( connects(triang2,1) *2 ) = P2(1, 1);
        N21( connects(triang2, 2) *2 ) = P2(2, 1);
        N21( connects(triang2, 3) *2 ) = P2(3, 1);
        
        N22 ( connects(triang2,1) *2 ) = P2(1, 2);
        N22( connects(triang2, 2) *2 ) = P2(2, 2);
        N22( connects(triang2, 3) *2 ) = P2(3, 2);
        
        
        % now: subtract, square, derivate with respect to every u ; weights
        E11 = (M11 + (-1)*N11)*sqrt(areas(triang1) + areas(triang2)); % works like vector addition
        E12 = (M12 + (-1)*N12)*sqrt(areas(triang1) + areas(triang2));
        E21 = (M21 + (-1)*N21)*sqrt(areas(triang1) + areas(triang2));
        E22 = (M22 + (-1)*N22)*sqrt(areas(triang1) + areas(triang2));
        
        
        
        
        %for j=1:n
        % with respect to all n displacement variables each
        % for j-th variable, derivative is contained in j-th row
        % Add this part of the derivative. If the vertex whose displacement
        % component was the j-th variable does not appear in the triangles,
        % 0 will be added 
        %    erg(j, :) = erg(j, :) + ...
        %        (sqderiv(E11, j)) + ...
        %        (sqderiv(E12, j)) + ...
        %        (sqderiv(E21, j)) + ...
        %        (sqderiv(E22, j));
        %end
        % his was commented because there is a more elegant solution:
        E = [E11', E12', E21', E22'];
        erg = erg + 2*(E*E'); % very nice and much faster (some seconds compared to 2 minn for TR_D)
        % the 2 could be omitted
        
        
        
    end % endif
end % endfor

return;

end % endfunction

