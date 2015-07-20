function deformerUI( TR )

      close all;

% ===========================================            
      options = getPatchOptions();
      FVInit = getPatchStruct( TR );
      FVOrig = FVInit;
      FV = FVInit;
      
      deformer = 1;     
      pointIndex = [];
      centerPoint = [];
      centerPointInit = [];
      offsetCenter = [];
      posInit = [];
      posEnd = [];
      
      constraintPoint = [];
      constraintPointInit = [];
      
      constraints.index = cell(0);
      constraints.displacement = cell(0);
      i = 0;
      
      s0 = [];
      s1 = [];
      s1Center = [];
      
      bDown = 0;
      
      objFEM = [];
      
      radius = 1;
      e = [1 0];
      
      Ptilda = getPtilda( TR );
      distortion = ones(size(TR.Points,1),1);
      
      % Preprocessing of deformers for real time
      fprintf('\n Mesh contains   %u   points and   %u   triangles\n', [size(TR.Points,1) size(TR.ConnectivityList,1)] );
      
      fprintf('\n Computing AAAP Hessian...')
      tic;
      G_AAAP = LSCoeffAAAP( TR );
      time = toc;
      fprintf('done (%.2f seconds). \n', time);
      
      fprintf('\n Computing LSCM Hessian...')
      tic;
      G_LSCM = LSCoeffLSCM( TR );
      time = toc;
      fprintf('done (%.2f seconds). \n', time);
      
      fprintf('\n Computing Linear Elasticity Hessian...')
      tic;
      objFEM = FEM( FV.faces, FV.vertices );
      [ ~, G_LinEl ] = objFEM.assembleSystem( zeros(size(FV.vertices)) );
      time = toc;
      fprintf('done (%.2f seconds). \n', time);
% ===========================================


      
% ===========================================
% Create the GUI
            figH = figure('Toolbar','figure',...
                              'Name','2D Mesh Manipulation',...
                              'Position', [0 0 1366 768]);      
                  p = patch( FV, options );
                  
                  
                  set(p,'FaceColor','flat',...
                              'FaceVertexCData',distortion,...
                              'CDataMapping','scaled');
                  cb = colorbar('location','eastoutside');
                  caxis([1 6]);
                  
                  
                  axis equal;
                  hold on;
                  
            hToolbar = uitoolbar( 'Parent',figH );
            
            hAxis = get(p,'parent');
% ===========================================                  

            

% ===========================================
% Create popup menu and other buttons
            %*****************************
            uiPopup = uicontrol('Style', 'popup', ...
                                    'String',sprintf('AAAP|LSCM|Linear Elasticity'),...
                                    'Position',[360 20 250 25],...
                                    'FontSize',14,...
                                    'Callback',@(h,e) selectDeformer() );
            
            %uiTextPopup = uicontrol( 'Style','text',...
            %                              'Position',[360 50 250 25],...
            %                              'FontSize',14,...
            %                              'String',['Select Deformation Method']);
                              
            uiSelectPoints = uicontrol('Style', 'pushbutton', 'String', 'Select points',...
                                            'Position', [20 20 200 25],...
                                            'FontSize',14,...
                                            'Callback', @(h,e) selectPoints );
            
            uiEraseConstraints = uicontrol('Style', 'pushbutton', 'String', 'Erase Constraints',...
                                            'Position', [20 50 200 25],...
                                            'FontSize',14,...
                                            'Callback', @(h,e) eraseConstraints );
                                
            uiSaveConstraints = uicontrol('Style', 'pushbutton', 'String', 'Save Constraints',...
                                            'Position', [750 20 200 25],...
                                            'FontSize',14,...
                                            'Callback', @(h,e) saveConstraints );
            %*****************************

            
            set( figH, 'WindowButtonDownFcn', @mDown );
            set( figH, 'WindowButtonUpFcn', @mUp );
            set( figH, 'WindowButtonMotionFcn', @mouseMove );
% ===========================================



%+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
%+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
%+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++




% ===========================================
      function saveConstraints( hLoc, event )
            if isempty(constraints.index)
                  warning( 'No constraints set. Choose constraints.' )
            else
                  assignin ( 'base', 'constraintsIndex', constraints.indexAll );
                  assignin ( 'base', 'constraintsDisplacement', constraints.displacementAll(constraints.indexAll,:) );
                  assignin ( 'base', 'G_LinEl', G_LinEl );
                  assignin ( 'base', 'G_AAAP', G_AAAP );
                  assignin ( 'base', 'G_LSCM', G_LSCM );
            end
            
            % new:
            % export as tikz
            fprintf('--- Begin TikZ Export -------------------\n');
            fprintf('\\begin{tikzpicture}[scale=1.0]\n')
            % write the nodes
            fprintf('%% define the nodes\n');
            for j = 1:size(TR.Points, 1) 
                pointcoord = TR.Points(j, :) + constraints.displacementAll(j, :);
                fprintf('\\node (vertex%d) at (%f, %f) {};\n', ...
                    j, pointcoord(1), pointcoord(2));
                % if constrained, extra point % done later
                
            end
            % define the colours
            fprintf('%% define the colours\n');
            cmap = colormap();
            for j = 1:64
                fprintf('\\definecolor{colour%d}{rgb}{%f, %f, %f}\n', ...
                    j, cmap(j, 1), cmap(j, 2), cmap(j, 3));
                % colourbar (once)
                %fprintf('\\fill[fill=colour%d, draw=colour%d] (%f,0)--(%f,0)--(%f,1)--(%f,1)--cycle;\n',...
                %    j, j, (j-1)/10, j/10, j/10, (j-1)/10);
            end
            
            % write the triangles
            fprintf('%% draw edges and fillings\n');
            for j = 1:size(TR.ConnectivityList, 1)
                triangnumbers = TR.ConnectivityList(j, :);
                colourID = min(64, round(distortion(j) * 63/5 - 11.6)); % 64 Colors
                fprintf('\\draw[fill=colour%d] (vertex%d.center) -- (vertex%d.center) -- (vertex%d.center) -- cycle;\n', ...
                    colourID, triangnumbers(1), triangnumbers(2), triangnumbers(3));
                % maybe add an fill opacity=0.6 command
                 
            end
            
            fprintf('%% highlight constrained points\n');
            for j = 1:size(TR.Points, 1) % marker for constrained points
                if(ismember(j, constraints.indexAll) == 1)
                     fprintf('\\draw[fill=red] (vertex%d.center) circle (0.5pt);\n', j);
                end
            end
            fprintf('\\end{tikzpicture}\n');
            fprintf('--- End   TikZ Export -------------------\n');
      end % end mdown
% ===========================================




% ===========================================
      function selectDeformer()
            deformer = get(uiPopup,'Value');
            
            updateDeformation()
            updatePlot();
      end % end chooseDataset
% ===========================================




% ===========================================
      function mDown( hLoc, event )
            HGEOM = get( hLoc, 'Position' );
            posInit = get( hAxis, 'CurrentPoint' );
            
            if strcmp(get(figH,'SelectionType'),'normal')
                  bDown = 1;
            else
                  bDown = 2;
            end
      end % end mdown
% ===========================================




% ===========================================
      function mUp( hLoc, event )
            HGEOM = get( hLoc, 'Position' );            
            bDown = 0;    
            
            FVInit = FV;
            constraintPointInit = constraintPoint;
            centerPointInit = centerPoint;
      end % end mup
% ===========================================




% ===========================================
      function eraseConstraints()
            FVInit = getPatchStruct( TR );
            FVOrig = FVInit;
            FV = FVInit;

            pointIndex = [];
            centerPoint = [];
            centerPointInit = [];
            offsetCenter = [];
            posInit = [];
            posEnd = [];
            distortion = ones(size(TR.ConnectivityList, 1), 1);
            
            constraintPoint = [];
            constraints.index = cell(0);
            constraints.displacement = cell(0);
            constraints.indexAll = [];
            constraints.displacementAll = [];
            i = 0;
            
            delete(s0);
            delete(s1);
            delete(s1Center);            
            s0 = [];
            s1 = [];
            s1Center = [];
            
            updatePlot();
      end % end eraseConstraints
% ===========================================




% ===========================================
      function mouseMove( hLoc, event )
            if bDown==0
                  return;   
            elseif bDown==1
                  if ~isempty(centerPoint)
                        posEnd = get( hAxis, 'CurrentPoint' );
                        offsetCenter = posEnd - posInit;
                        offsetCenter = offsetCenter(1,1:2);
                        centerPoint = centerPointInit + offsetCenter;
                        constraintPoint = constraintPointInit + repmat(offsetCenter,size(constraintPoint,1),1);
                        constraints.displacement{i} = repmat(offsetCenter,size(constraintPoint,1),1);
                        FV.vertices(pointIndex,:) = FVInit.vertices(pointIndex,:) + repmat(offsetCenter,size(constraintPoint,1),1);
                  end
            elseif bDown==2
                  if ~isempty(centerPoint)
                        offsetVector = get( hAxis, 'CurrentPoint' );
                        offsetVector = offsetVector(1,1:2);
                        offsetVector = offsetVector - posInit(1,1:2);                        
                        
                        % Method 1
                        phi = pi*offsetVector(1,2)/radius;
                        phiDegree = 360*phi/(2*pi);                  
                        rot = [cos(phi) -sin(phi) ; sin(phi) cos(phi)];

                        constraintPointTemp = constraintPointInit - repmat(centerPointInit,size(constraintPointInit,1),1);
                        constraintPoint = constraintPointTemp*rot' + repmat(centerPointInit,size(constraintPointTemp,1),1);

                        constraints.displacement{i} = constraintPoint - FVInit.vertices(constraints.index{i},:);
                        FV.vertices(pointIndex,:) = FVInit.vertices(pointIndex,:) + constraints.displacement{i};
                        
                  end
            end
            
            constraints.indexAll = unique(cell2mat(constraints.index'));
            constraints.displacementAll = FV.vertices - FVOrig.vertices;
            
            if i>=2
                  updateDeformation();
            end
            
            updatePlot();
      end % end mouseMove
% ===========================================




% ===========================================
      function selectPoints()
            rect = getrect( figH );
            polygonRect = [ rect(1)         rect(2) ; ...
                            rect(1)+rect(3) rect(2) ; ...
                            rect(1)+rect(3) rect(2)+rect(4) ; ...
                            rect(1)         rect(2)+rect(4) ; ...
                            rect(1)         rect(2) ];
            
            [ IN, ON ] = inpolygon( FV.vertices(:,1),FV.vertices(:,2), polygonRect(:,1),polygonRect(:,2) );
            
            pointIndex = find(IN);
            constraintPointInit = FV.vertices(pointIndex,:);
            constraintPoint = constraintPointInit;
            centerPointInit = sum(FV.vertices(pointIndex,:),1) / length(pointIndex);
            centerPoint = centerPointInit;
            
            constraints.index{end+1} = pointIndex;
            constraints.displacement{end+1} = 0*constraintPointInit;
            i = length(constraints.index);
            constraints.indexAll = unique(cell2mat(constraints.index'));
            constraints.displacementAll = FV.vertices - FVOrig.vertices;
            
            radius = distMax( constraintPointInit );
            
            if i>=2
                  updateDeformation();
            end
            
            updatePlot();
      end % end selectPoints
% ===========================================



% ===========================================
      function updatePlot()
                  
            set(p,'vertices',FV.vertices);
            
            if ~isempty(pointIndex)
                  if isempty(s0)
                        s1 = scatter( FV.vertices(constraints.indexAll,1), FV.vertices(constraints.indexAll,2), 40, rgb('blue'), 'fill' );
                        s0 = scatter( constraintPoint(:,1), constraintPoint(:,2), 36, rgb('mediumseagreen'), 'fill' );
                        s1Center = scatter( centerPoint(:,1), centerPoint(:,2), 50, rgb('red'), 'fill' );
                        axis equal;
                        
                        set(p,'FaceColor','flat',...
                              'FaceVertexCData',distortion,...
                              'CDataMapping','scaled');
%                         cb = colorbar('location','eastoutside');
                  else
                        set(s0, 'xdata', constraintPoint(:,1));
                        set(s0, 'ydata', constraintPoint(:,2));
                        set(s1, 'xdata', FV.vertices(constraints.indexAll,1));
                        set(s1, 'ydata', FV.vertices(constraints.indexAll,2));
                        set(s1Center, 'xdata', centerPoint(:,1));
                        set(s1Center, 'ydata', centerPoint(:,2));
                        axis equal;
                        
                        set(p,'FaceColor','flat',...
                              'FaceVertexCData',distortion,...
                              'CDataMapping','scaled');
%                         cb = colorbar('location','eastoutside');
                  end
            end  
      end % end updatePlot
% ===========================================



% ===========================================
      function updateDeformation()
                  if deformer==1 % AAAP
                        u = constraints.displacementAll;
                        u = solveLinearSystem( u, constraints.indexAll, G_AAAP );
%                         u = optimizeAAAP( TR, u(constraints.indexAll,:), constraints.indexAll );
                        FV.vertices = FVOrig.vertices + u;
                  elseif deformer==2 % LSCM
                        u = constraints.displacementAll;
                        u = solveLinearSystem( u, constraints.indexAll, G_LSCM );
                        FV.vertices = FVOrig.vertices + u;
                  elseif deformer==3 % elasticity
                        u = constraints.displacementAll;
                        [ u, ~ ] = objFEM.solveLinear( u, constraints.indexAll );
                        FV.vertices = FVOrig.vertices + u;
                  end
                  
                  A = getA( u', TR, Ptilda );
                  A = mat2cell( A, 2, 2*ones(1,size(TR.ConnectivityList,1)) );
                  A = cellfun( @(A) A + eye(2) , A, 'UniformOutput', false );
                  distortion = cellfun( @cond , A, 'UniformOutput', false );
                  distortion = cell2mat(distortion)';
                  
      end % end updatePlot
% ===========================================
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

end