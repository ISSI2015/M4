function PlotExample( G, uConstr, ind, TR, flag, name )
      
      close all;

      if flag==1
            u = solveSystemPlot( uConstr, ind, G );
            Ptilda = getPtilda( TR );
            A = getA( u', TR, Ptilda );
            distortion = cell2mat(cellfun( @cond , A, 'UniformOutput', false )');
      else
            u = zeros(size(TR.Points));
      end
      
      FV = getPatchStruct( TR );
      FV.vertices = FV.vertices + u;
      
      %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
      fig = figure('Position',[100 100 600 800] );
            p = patch( FV, getPatchOptions() );
            hold on;
            
            if flag==1
                  set(p,'FaceColor','flat',...
                                    'FaceVertexCData',distortion,...
                                    'CDataMapping','scaled');
                  cb = colorbar('location','eastoutside');
                  colormap('jet');
                  caxis([1 4]);
            end
            
            s = scatter( FV.vertices(ind,1), FV.vertices(ind,2), 100, rgb('lime'), 'fill' );
            
            set(fig,'color',[1 1 1]);
            a = get(p,'parent'); % get axes handle
            set( a, 'visible','off' );            
            
            axis equal;
            
      %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
      
      if(1)
            print( fig, '-dpng', '-r900', [ pwd '/images/fig---' name '.png']);
      end
      
end

function Ptilda = getPtilda( TR )

      P = TR.Points;
      C = TR.ConnectivityList;
      
      Ptilda = cell(size(C,1),1);

      for i=1:size(C,1)
            Ptilda{i} = inv([P(C(i,:),:)';1 1 1]);
            Ptilda{i}(:,end) = [];
      end
      
end

function A = getA( u, TR, Ptilda )

      P = TR.Points;
      C = TR.ConnectivityList;
      
      
      U = u(:,C');
      Ptilda = blkdiag(Ptilda{:});
      
      A = U*Ptilda;
      A = mat2cell( A, 2, 2*ones(1,size(TR.ConnectivityList,1)) );
      A = cellfun( @(A) A + eye(2) , A, 'UniformOutput', false );
      
end

function uSol = solveSystemPlot( uConstr, indexConstraint, A )

      indexConstraint_dof = reshape([ 2*indexConstraint'-1 ; 2*indexConstraint' ],[],1);
      indexConstraint_dof_complement = setdiff( 1:size(A,1),indexConstraint_dof );

      uConstr = reshape(uConstr',[],1);
      uSol = zeros(size(A,1),1);
      uSol(indexConstraint_dof) = uConstr;
      
      A_red = A;
      A_red(indexConstraint_dof,:) = [];
      A_red(:,indexConstraint_dof) = [];
      A_dir = A(indexConstraint_dof_complement,:);
      A_dir = A_dir(:,indexConstraint_dof);

      uSol(indexConstraint_dof_complement) = - A_red \ A_dir*uSol(indexConstraint_dof);
      uSol = reshape(uSol,2,[])';

end