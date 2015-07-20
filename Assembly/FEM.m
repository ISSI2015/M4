classdef FEM < dynamicprops

      properties
            
            tri = -1;
            vertex = -1;
            
            q = -1;
            b = -1;
            
            indexB = -1;
            indexI = -1;
            indexB_dof = -1;
            indexI_dof = -1;
            
            permute = -1
            permuteInv = -1
            permute_dof = -1
            permuteInv_dof = -1
            
            volCell = -1;
            oneRing = -1;
            
            material = -1;
            Mu = -1;
            Lambda = 1;
            
      end % properties
	
      %********************************************************************************************
      %********************************************************************************************
      
	methods
            
            %-------------------------------------------------------------------
		function obj = FEM( tri, vertex )  % Constructor of the class
			
			obj.tri = tri;
                  obj.vertex = vertex;

                  obj.q = quadrature( 1 );
                  obj.b = basis( 1, 2 );
                  
                  obj.material = 'Linear';
                  
                  obj.Mu = 10;
                  obj.Lambda = 4;
                  
                  TR = triangulation( tri, vertex );
                  obj.indexB = TR.freeBoundary;
                  obj.indexB = obj.indexB(:,1);
                  obj.indexI = setdiff( (1:size(vertex,1))', obj.indexB );
                  
                  obj.indexB_dof = reshape([ 2*obj.indexB'-1 ; 2*obj.indexB' ],[],1);
                  obj.indexI_dof = reshape([ 2*obj.indexI'-1 ; 2*obj.indexI' ],[],1);
                  
                  obj.permute = [ obj.indexB ; obj.indexI ];
                  [~,obj.permuteInv] = ismember((1:size(obj.permute,1))',obj.permute);
                  
                  obj.permute_dof = reshape([ 2*obj.permute'-1 ; 2*obj.permute' ],[],1);
                  obj.permuteInv_dof = reshape([ 2*obj.permuteInv'-1 ; 2*obj.permuteInv' ],[],1);
                  
                  obj.volCell = obj.computeVolume();
                  obj.oneRing = obj.getOneRingTrisOfVertex();
                  
		end % end constructor
            %-------------------------------------------------------------------
            
            %-------------------------------------------------------------------
            function [ F, A ] = assembleSystem( obj, uDef )

                  u0 = reshape( uDef', [], 1 );
                  DOF = obj.getDof();
                  trafo = obj.getTransformation();
                  trafo = trafo{2}(obj.q.points);

                  lengthBasis = 3;
                  gradientMatBase0 = obj.b.gradientMat(obj.q.points);
                  
                  MaterialConst.Mu = obj.Mu;
                  MaterialConst.Lambda = obj.Lambda;
                  [ A, F ] = assemblingSVK_m_file_mex( DOF, trafo, obj.vertex', obj.tri',...
                                                      gradientMatBase0, lengthBasis,...
                                                      obj.q.points, obj.q.weights,...
                                                      0*u0, MaterialConst );

                  A = sparse(A);
                  A = 1/2*(A+A');
                  
                  obj.addprop( 'A' );
                  obj.A = A;
                  
            end
            %-------------------------------------------------------------------            
            
            %-------------------------------------------------------------------
            function [ uSol, fSol ] = solveLinear( obj, uDef, indexDirichlet )
                  
                  uDef = reshape(uDef',[],1);
                  uSol = uDef;
                  
                  if ~isempty(indexDirichlet)
                        indexDirichlet_dof = reshape([ 2*indexDirichlet'-1 ; 2*indexDirichlet' ],[],1);
                        indexDirichlet_dof_complement = setdiff( 1:size(obj.A,1),indexDirichlet_dof );

                        
                        A_red = obj.A;
                        A_red(indexDirichlet_dof,:) = [];
                        A_red(:,indexDirichlet_dof) = [];
                        A_dir = obj.A(indexDirichlet_dof_complement,:);
                        A_dir = A_dir(:,indexDirichlet_dof);

                        uSol(indexDirichlet_dof_complement) = - A_red \ A_dir*uDef(indexDirichlet_dof);
                  else
                        uSol = zeros(size(A,1),1);
                  end
                  
                  fSol = reshape(obj.A*uSol,2,[])';
                  uSol = reshape(uSol,2,[])';
                  
            end
            %-------------------------------------------------------------------
            
            %-------------------------------------------------------------------
            function dof = getDof( obj, elem )
                  
                  if nargin==1
                        dof = obj.tri;
                  elseif nargin==2
                        dof = obj.tri(elem,:);
                  end                        
                  
            end
            %-------------------------------------------------------------------
        
            %-------------------------------------------------------------------
            function trafo = getTransformation( obj, elem )
            
                  if nargin==1
                        elem = 1:size(obj.tri,1);
                  end                
                  
                  N = length( elem );
                  p = obj.getCoord( obj.getDof( elem ) );
                  
                  P = [p(1:2*N,2)-p(1:2*N,1) p(1:2*N,3)-p(1:2*N,1)];                    
                  
                  % Produces field of points from a given set of
                  % barycentric coordinates
                  trafo{1} = @(xi) P*xi + repmat(p(1:2*N,1),1,size(xi,2));
                  
                  % Derivatives
                  trafo{2} = @(xi) repmat(P,1,size(xi,2));

            end
            %-------------------------------------------------------------------
            
            %-------------------------------------------------------------------
            function c = getCoord( obj, dof )
            % Return the corner point coordinates of a given triangle
            
                  v = obj.vertex';
                  c = reshape(v(:,dof),2*size(dof,1),[]);
            
            end
            %-------------------------------------------------------------------
            
            %-------------------------------------------------------------------
            function [ volCell ] = computeVolume( obj )
                  
                  P = [ obj.vertex(obj.tri',:) ones(numel(obj.tri),1) ]';
                  P = mat2cell( P, 3, 3*ones( 1,1/3*size(P,2) ) );
                  volCell = cellfun( @(x) 0.5*abs(det(x)), P, 'UniformOutput', false )';
                  
            end
            %-------------------------------------------------------------------
            
            function oneRing = getOneRingTrisOfVertex( obj )

                  indexCell = mat2cell( (1:size(obj.vertex,1))', ones( size(obj.vertex,1), 1 ), 1 );

                  oneRing = cellfun( @(x) modifiedFind( obj.tri, x )', indexCell, 'UniformOutput', false );
                  
                  function rows = modifiedFind( list, index )
                        [ rows, ~ ] = find( list==index );
                  end
                  
            end
            %-------------------------------------------------------------------
            
	end % methods
    
end % end classdef