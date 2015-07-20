function B = basis( order, dim )
% --- returns a structure containing the set of basis functions on a unit simplex for P1 or P2 elements including their derivatives.
% --- base functions are implemented as function handles

points = p(order,dim);

      switch dim
            case 2
                  switch order
                        case 1,
                              B = struct('lengthBasis', 3, 'points', points, 'value', @P1value, ...
                                  'gradientMat', @P1gradientMat, ... 
                                  'elementOrder', 1, 'dimension',2);
                        case 2,
                              B = struct('lengthBasis', 6, 'points', points, 'value', @P2value, ...
                                  'gradientMat', @P2gradientMat, ...
                                  'elementOrder', 2, 'dimension',2);
                        otherwise
                            error('No FEM with order higher than 2 implemented.')
                  end
            case 3
                  switch order
                        case 1,
                              B = struct('lengthBasis', 4, 'points', points, 'value', @P1value3D, ...
                                  'gradientMat', @P1gradientMat3D, ... 
                                  'elementOrder', 1, 'dimension',3);
                        case 2,
                              B = struct('lengthBasis', 10, 'points', points, 'value', @P2value3D, ...
                                  'gradientMat', @P2gradientMat3D, ...
                                  'elementOrder', 2, 'dimension',3);
                        otherwise
                            error('No FEM with order higher than 2 implemented.')
                  end
      end

end

function y = P1value(x) % evaluate all basis functions at point x
    y = zeros(3,size(x,2));
	y(1,:) = 1 - x(1,:) - x(2,:);
	y(2,:) = x(1,:);
	y(3,:) = x(2,:);
end

function y = P1value3D(x) % evaluate all basis functions at point x
    y = zeros(4,size(x,2));
	y(1,:) = 1 - x(1,:) - x(2,:) - x(3,:);
	y(2,:) = x(1,:);
	y(3,:) = x(2,:);
      y(4,:) = x(3,:);
end

function D = P1gradientMat(x)
	D = zeros(3,size(x,2),2); % #basis function, #evaluation point, x or y
	D(1,:,:) = -1;
      
	D(2,:,1) = 1;
	D(2,:,2) = 0;
	
      D(3,:,1) = 0;
	D(3,:,2) = 1;
end

function D = P1gradientMat3D(x)
	D = zeros(4,size(x,2),3); % #basis function, #evaluation point, x or y
	D(1,:,:) = -1;
      
	D(2,:,1) = 1;
	D(2,:,2) = 0;
	D(2,:,3) = 0;
      
      D(3,:,1) = 0;
	D(3,:,2) = 1;
      D(3,:,3) = 0;
      
      D(4,:,1) = 0;
      D(4,:,2) = 0;
	D(4,:,3) = 1;
end

function y = P2value(x)
% The row index is index of base function, coulmn index is index of the
% point. Points are 2x1 matrices.
	y = zeros(6,size(x,2));
	y(1,:) = (1 - x(1,:) - x(2,:)) .* (1 - 2*x(1,:) - 2*x(2,:));
	y(2,:) = x(1,:) .* (2*x(1,:) - 1);
	y(3,:) = x(2,:) .* (2*x(2,:) - 1);
	y(4,:) = 4 * x(1,:) .* (1 - x(1,:) - x(2,:));
	y(5,:) = 4 * x(1,:) .* x(2,:);
	y(6,:) = 4 * x(2,:) .* (1 - x(1,:) - x(2,:));
end

function y = P2value3D(x)
% The row index is index of base function, coulmn index is index of the
% point. Points are 2x1 matrices.
	y = zeros(10,size(x,2));
	y(1,:) =  1 -3*x(1,:) -3*x(2,:) -3*x(3,:)     +2*x(1,:).^2  +2*x(2,:).^2  +2*x(3,:).^2     +4*x(1,:).*x(2,:)  +4*x(1,:).*x(3,:)  +4*x(2,:).*x(3,:);
	y(2,:) = -x(1,:) +2*x(1,:).^2;
	y(3,:) = -x(2,:) +2*x(2,:).^2;
	y(4,:) = -x(3,:) +2*x(3,:).^2;
	y(5,:) = 4*x(1,:) -4*x(1,:).^2  -4*x(1,:).*x(2,:)  -4*x(1,:).*x(3,:);
	y(6,:) = 4*x(1,:).*x(2,:);
      y(7,:) = 4*x(2,:) -4*x(2,:).^2  -4*x(1,:).*x(2,:)  -4*x(2,:).*x(3,:);
      y(8,:) = 4*x(3,:) -4*x(3,:).^2     -4*x(1,:).*x(3,:)  -4*x(2,:).*x(3,:);
      y(9,:) = 4*x(2,:).*x(3,:);
      y(10,:) = 4*x(1,:).*x(3,:);
end

function D = P2gradientMat(x)
% First matrix is the first component of the gradient (row index is base function, column index is point index), second matrix is the
% second component of the gradient.

	D = zeros(10,size(x,2),3); % (#basis function, #evaluation point, x or y)
	D(1,:,1) = 4 * x(1,:) + 4 * x(2,:) - 3;
	D(1,:,2) = 4 * x(1,:) + 4 * x(2,:) - 3;
    
	D(2,:,1) = 4 * x(1,:) - 1;
	D(2,:,2) = 0;
	
      D(3,:,1) = 0;
	D(3,:,2) = 4 * x(2,:) - 1;
	
      D(4,:,1) = 4 * (1 - x(2,:) - 2*x(1,:)); 
	D(4,:,2) = -4 * x(1,:);
	
      D(5,:,1) = 4 * x(2,:);
	D(5,:,2) = 4 * x(1,:); 
	
      D(6,:,1) = -4 * x(2,:);
	D(6,:,2) = 4 * (1 - x(1,:) - 2*x(2,:));
end

function D = P2gradientMat3D(x)
% First matrix is the first component of the gradient (row index is base function, column index is point index), second matrix is the
% second component of the gradient.

	D = zeros(10,size(x,2),3); % (#basis function, #evaluation point, x or y)
	D(1,:,1) = -3 + 4*x(1,:) + 4*x(2,:) + 4*x(3,:);
	D(1,:,2) = -3 + 4*x(2,:) + 4*x(1,:) + 4*x(3,:);
      D(1,:,3) = -3 + 4*x(3,:) + 4*x(1,:) + 4*x(2,:);
    
	D(2,:,1) = -1 -4*x(1,:);
	D(2,:,2) = 0;
      D(2,:,3) = 0;
	
      D(3,:,1) = 0;
	D(3,:,2) = -1 -4*x(2,:);
      D(3,:,3) = 0;
	
      D(4,:,1) = 0; 
	D(4,:,2) = 0;
      D(4,:,3) = -1 -4*x(3,:);
	
      D(5,:,1) = 4-8*x(1,:)-4*x(2,:)-4*x(3,:);
	D(5,:,2) = -4*x(1,:);
      D(5,:,3) = -4*x(1,:);
	
      D(6,:,1) = 4*x(2,:);
	D(6,:,2) = 4*x(1,:);
      D(6,:,3) = 0;
      
      D(7,:,1) = -4*x(2,:);
	D(7,:,2) = 4-8*x(2,:)-4*x(1,:)-4*x(3,:);
      D(7,:,3) = -4*x(2,:);
      
      D(8,:,1) = -4*x(3,:);
	D(8,:,2) = -4*x(3,:);
      D(8,:,3) = 4-8*x(3,:)-4*x(1,:)-4*x(2,:);
      
      D(9,:,1) = 0;
	D(9,:,2) = 4*x(3,:);
      D(9,:,3) = 4*x(2,:);
      
      D(10,:,1) = 4*x(3,:);
	D(10,:,2) = 0;
      D(10,:,3) = 4*x(1,:);
end

function a = p(num,dim)

      switch dim
            case 2
                  switch num
                        case 1,
                          a = [ 0 1 0;...
                                0 0 1 ];
                        case 2,
                          a = [ 0 1 0 0.5 0.5 0   ;...
                                0 0 1  0  0.5 0.5 ];
                  end
            case 3
                  switch num
                        case 1,
                          a = [ 0 1 0 0 ; ...
                                   0 0 1 0 ; ...
                                   0 0 0 1 ];
                        case 2,
                          a = [ 0 1 0 0     0.5    0.5     0      0       0     0.5 ; ...
                                   0 0 1 0      0      0.5    0.5    0     0.5     0 ; ...
                                   0 0 0 1      0        0      0     0.5   0.5   0.5 ];
                  end
      end

end
