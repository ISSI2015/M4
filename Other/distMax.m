function [ diam ] = distMax( p )

      % Diameter of a set (not memory efficient)

      p1 = zeros(size(p,1),size(p,1),2);
      p2 = zeros(size(p,1),size(p,1),2);
      
      p1(:,:,1) = repmat(p(:,1),1,size(p,1));
      p1(:,:,2) = repmat(p(:,2),1,size(p,1));
      p2(:,:,1) = repmat(p(:,1)',size(p,1),1);
      p2(:,:,2) = repmat(p(:,2)',size(p,1),1);
      
      D = sqrt(sum((p1-p2).^2,3));
      diam = max(max(D));
            
end