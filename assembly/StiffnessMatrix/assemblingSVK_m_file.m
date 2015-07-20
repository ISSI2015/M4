%#codegen
function [ A, F ] = assemblingSVK_m_file( DOF, trafo, pAll, t, gradientMatBase0, lengthBasis, points, weights, u0, matConst )

    positions = getGlobalPositions(DOF);
    A = zeros(2*size(pAll,2),2*size(pAll,2));
    F = zeros(2*size(pAll,2),1);
    
    gradientMatBase = zeros(2*size(points,2),4*lengthBasis);
    stress = zeros(4*lengthBasis,2*size(points,2));
        for j=1:size(points,2) % index of evaluation point
            for i=1:lengthBasis % index of base function
                gradientMatBase((2*j-1):2*j,(4*i-3):4*i) = [gradientMatBase0(i,j,1) gradientMatBase0(i,j,2) 0 0;0 0 gradientMatBase0(i,j,1) gradientMatBase0(i,j,2)];
                stress(4*i-3:4*i-2,2*j-1:2*j) = gradientMatBase(2*j-1:2*j,4*i-3:4*i-2);
                stress(4*i-1:4*i,2*j-1:2*j) = gradientMatBase(2*j-1:2*j,4*i-1:4*i);
            end
        end
        
        for count=1:size(t,2)
            u0_loc = u0(positions(count,:));
            grad_u0 = giveGradient(stress,u0_loc,trafo(2*count-1:2*count,:));
            sigma_u0 = giveSigma(grad_u0,matConst.Mu,matConst.Lambda);
            
            localA = localAssemblingSVK(stress,gradientMatBase,trafo(2*count-1:2*count,:),weights,matConst.Mu,matConst.Lambda,grad_u0,sigma_u0);
            localF = localAssemblingF(grad_u0,sigma_u0,gradientMatBase,trafo(2*count-1:2*count,:),weights);
            A(positions(count,:),positions(count,:)) = A(positions(count,:),positions(count,:)) + localA;
            F(positions(count,:)) = F(positions(count,:)) + localF';
        end

end



function F = localAssemblingF(grad_u0,sigma_u0,gradientMatBase,trafo,weights)

    N = length(weights);

    trafoDet = trafoDeterminant(trafo);
    
    for i=1:N
        weights(i) = weights(i)*trafoDet(i);
    end
    
    for i=1:N
        inv = trafo(:,2*i-1:2*i)\eye(2);
        gradientMatBase(2*i-1:2*i,:) = gradientMatBaseFun(gradientMatBase(2*i-1:2*i,:),inv,weights(i));
    end
    
    grad_u0 = repmat(eye(2),1,0.5*size(grad_u0,2)) + grad_u0;
    
    sigmaCell = makeBlockDiag2by2(sigma_u0);
    stress = grad_u0*sigmaCell;
    
    stress = stressTranspose(stress);
    
    mat = stress*gradientMatBase; % size is 2-by-2*k
    
    F = matrixTraceFun(mat);
     
end


function localA = localAssemblingSVK(stress,gradientMatBase,trafo,weights,Mu,Lambda,grad_u0,sigma_u0)

    N = length(weights);
    
    for i=1:N
        stress(:,2*i-1:2*i) = strain2Stress(stress(:,2*i-1:2*i),trafo(:,2*i-1:2*i),Mu,Lambda,grad_u0(:,2*i-1:2*i),sigma_u0(:,2*i-1:2*i),weights(i));
        gradientMatBase(2*i-1:2*i,:) = symmetrizeStrain(gradientMatBase(2*i-1:2*i,:),trafo(:,2*i-1:2*i)); % do not do it for nonlinear method (see subfunction)
    end
    
    mat = stress*gradientMatBase; % stress - times - test-strain
    localA = matrixTraceFunA(mat); %assemble2by2Blocks(mat);
    
end


function grad_u0 = giveGradient(stress,u0_loc,trafo)
% 'stress' here means just a transposed gradient matrix
    temp = zeros(size(stress));

    trafo = invertBlock2by2(trafo);
    trafoCell = makeBlockDiag2by2(trafo);
    
    stress = stress*trafoCell;

    for i=1:0.5*length(u0_loc)
        D = diag([u0_loc(2*i-1:2*i) ; u0_loc(2*i-1:2*i)]);
        temp(4*i-3:4*i,:) = D*stress(4*i-3:4*i,:);
    end

    grad_u0 = [sum(temp(1:2:end,:)) ; sum(temp(2:2:end,:))];
    
end

function sigma_u0 = giveSigma(grad_u0,Mu,Lambda)

    N = size(grad_u0);
    sigma_u0 = zeros(N);
    
    for i=1:1/2*N(1)
        for j=1:1/2*N(2)
             E = 0.5*( grad_u0(2*i-1:2*i,2*j-1:2*j) + grad_u0(2*i-1:2*i,2*j-1:2*j)' + grad_u0(2*i-1:2*i,2*j-1:2*j)'*grad_u0(2*i-1:2*i,2*j-1:2*j) );
            sigma_u0(2*i-1:2*i,2*j-1:2*j) = Lambda*trace(E)*eye(2) + 2*Mu*(E);
        end
    end
                                        
end

function positions = getGlobalPositions(DOF)

    positions = zeros(size(DOF,1),2*size(DOF,2));
    positions(:,1:2:end) = 2*DOF-1;
    positions(:,2:2:end) = 2*DOF;

end

function stress = getStressSVK(mat,Mu,Lambda,grad_u0,sigma_u0)

    eps = 0.5*(mat + mat');
    stress =  mat*sigma_u0 + (eye(2) + grad_u0)*( Lambda*trace(eps)*eye(2) + 2*Mu*eps +...
                        Lambda*trace(grad_u0'*mat)*eye(2) + Mu*(grad_u0'*mat + mat'*grad_u0) );
    
end

function trafoDet = trafoDeterminant(trafo)

    N = size(trafo);
    trafoDet = zeros(1/2*N(1),1/2*N(2));
    
    for i=1:1/2*N(1)
        for j=1:1/2*N(2)
            trafoDet(i,j) = abs(det(trafo(2*i-1:2*i,2*j-1:2*j)));
        end
    end

end

function mat = gradientMatBaseFun(mat,inv,weight)

    N = size(mat);

    for i=1:1/2*N(1)
        for j=1:1/2*N(2)
            mat(2*i-1:2*i,2*j-1:2*j) = mat(2*i-1:2*i,2*j-1:2*j)*inv*weight;
        end
    end
    
end

function mat = stressTranspose(mat)

    N = size(mat);

    for i=1:1/2*N(1)
        for j=1:1/2*N(2)
            mat(2*i-1:2*i,2*j-1:2*j) = mat(2*i-1:2*i,2*j-1:2*j)';
        end
    end

end

function F = matrixTraceFun(mat)

    N = size(mat);
    F = zeros(1,1/2*N(2));

     for i=1:1/2*N(2)
             F(i) = trace(mat(:,2*i-1:2*i));
     end
          
end

function F = matrixTraceFunA(mat)

    N = size(mat);
    F = zeros(1/2*N(1),1/2*N(2));

    for k=1:1/2*N(1)
         for i=1:1/2*N(2)
                 F(k,i) = trace(mat(2*k-1:2*k,2*i-1:2*i));
         end
    end
         
end

function stress = strain2Stress(strain,trafo,Mu,Lambda,grad_u0,sigma_u0,weight)

    N = size(strain,1);
    stress = zeros(size(strain));
    
    for i=1:1/2*N
        stress(2*i-1:2*i,:) = getStressSVK(strain(2*i-1:2*i,:) * (trafo\eye(2)), Mu, Lambda, grad_u0, sigma_u0)' * abs(det(trafo)) * weight;  
    end

end

function  mat = symmetrizeStrain(mat,trafo)

    N = size(mat,2);

    for i=1:1/2*N
        %mat(:,2*i-1:2*i) = 0.5*(mat(:,2*i-1:2*i)*(trafo\eye(2))+(mat(:,2*i-1:2*i)*(trafo\eye(2)))');
        mat(:,2*i-1:2*i) = mat(:,2*i-1:2*i)*(trafo\eye(2)); % no symmetrization
    end
    
end

function mat = invertBlock2by2(mat)

    N = size(mat);

    for i=1:1/2*N(1)
        for j=1:1/2*N(2)
            mat(2*i-1:2*i,2*j-1:2*j) = mat(2*i-1:2*i,2*j-1:2*j)\eye(2);
        end
    end

end

function trafoCell = makeBlockDiag2by2(trafo)

    trafoCell = zeros(size(trafo,2),size(trafo,2));
    
    for i=1:1/2*size(trafo,2)
        trafoCell(2*i-1:2*i,2*i-1:2*i) = trafo(:,2*i-1:2*i);
    end

end