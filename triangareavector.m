function y = triangareavector(TR_D)
% returns column vector of triangle areas (sorted by ConnectivityList)

      points = TR_D.Points;
      connects = TR_D.ConnectivityList;

      Area = zeros(size(connects,1),1); % initialise with 0
      
      for i=1:size(connects,1)
            % Set up the points of the triangle as vectors
            P1 = [points(connects(i,1),1); (points(connects(i,1),2))];
            P2 = [points(connects(i,2),1); (points(connects(i,2),2))];
            P3 = [points(connects(i,3),1); (points(connects(i,3),2))];

            %Creating vectors that correspond to two edges of the triangle
            V1 = P1 - P3;
            V2 = P2 - P3;

%             fprintf('We can print: %.2d %.2d %.2d %.2d ', [V1,V2] );

            %turning them into a matrix, then finding half the determinant of
            %this to give the area of said triangle
            Area(i) = (0.5*det([V1,V2]));
      end
        
      y = Area';
      
end