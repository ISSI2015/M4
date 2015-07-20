function erg = LSCoeffLSCM( TR_D )
% Computes the matrix B of dimension n x n for n/2 points in the mesh, 
% which is the coefficient matrix of the linear system of equations that
% arises from determining a zero gradient for the energy functional of 
% LSCM/ASAP (similar to AAAP), which is equivalent to find a minimum or maximum.
% For given constraints, remove the corresponding "=0"-equations and append 
% the given "=x"-conditions as new equations.

points = TR_D.Points;
pointsTrans = points' ;
n = 2*length(points); % number of constraint variables; dimension of erg should be n x n
erg(n,n) = 0; % initialise result variable
connects = TR_D.ConnectivityList;
areas = triangareavector(TR_D); % pre-compute the areas
areas = areas / sum(areas); % normalise
% iterate over all triangles
for i= 1 : size(connects, 1)
        triang = i; % as one iterates over all triangles
        % P is the three point's coordinates, written as column vectors
        P = pointsTrans ( :, connects(triang, :) ); 
        
        % add 1 1 1 row
        P(3, :) = [1 1 1];
        
        % invert
        P = inv(P);
        
        % cut the 3rd column, as that omits the translation vector in A
        P(:, 3) = [];
        
        % now we have P 1 tilda inv tilda!
        % generate 2x2-Matrix M of linear polynomials
        % initialisation
        M11 = zeros(1,n); M12 = zeros(1,n); M21 = zeros(1,n); M22 = zeros(1,n); 
        
        M11( connects(triang, 1) *2-1 ) = P(1, 1); 
            % explanation: M11 is the upper-left cell in the matrix
            % resulting from U * P1. This means that we need to add P1(1,1)
            % to the coefficient before the variable which is written
            % top-left in U, which is corresponding to the x-coodinate (so *2-1) of
            % the first vertex of triang1
        M11( connects(triang, 2) *2-1 ) = P(2, 1);
        M11( connects(triang, 3) *2-1 ) = P(3, 1);
        
        % other polynomials similarly
        M12 ( connects(triang,1) *2-1 ) = P(1, 2);
        M12( connects(triang, 2) *2-1 ) = P(2, 2);
        M12( connects(triang, 3) *2-1 ) = P(3, 2);
        
        M21 ( connects(triang,1) *2 ) = P(1, 1);
        M21( connects(triang, 2) *2 ) = P(2, 1);
        M21( connects(triang, 3) *2 ) = P(3, 1);
        
        M22 ( connects(triang,1) *2 ) = P(1, 2);
        M22( connects(triang, 2) *2 ) = P(2, 2);
        M22( connects(triang, 3) *2 ) = P(3, 2);
        
       
        % now: compute energy by norms of (a-d), (b+c)
        E1 = (M11 + (-1)*M22)*sqrt(areas(triang)); % works like vector addition
        E2 = (M12 + M21)*sqrt(areas(triang));
        
        % with respect to all n displacement variables each
        % for j-th variable, derivative is contained in j-th row
        % Add this part of the derivative. If the vertex whose displacement
        % component was the j-th variable does not appear in the triangles,
        % 0 will be added 
        % elegant solution
        E = [E1', E2'];
        added = 2*(E*E');
        
        erg = erg + 2*(E*E'); % 
        % the 2 could be omitted
        
        
        
    
end % endfor

return;

end % endfunction

