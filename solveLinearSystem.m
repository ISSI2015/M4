function uSol = solveLinearSystem( uDef, indexConstraint, A )

      uDef = reshape(uDef',[],1);
      uSol = uDef;

      if ~isempty(indexConstraint)
            indexConstraint_dof = reshape([ 2*indexConstraint'-1 ; 2*indexConstraint' ],[],1);
            indexConstraint_dof_complement = setdiff( 1:size(A,1),indexConstraint_dof );


            A_red = A;
            A_red(indexConstraint_dof,:) = [];
            A_red(:,indexConstraint_dof) = [];
            A_dir = A(indexConstraint_dof_complement,:);
            A_dir = A_dir(:,indexConstraint_dof);

            uSol(indexConstraint_dof_complement) = - A_red \ A_dir*uDef(indexConstraint_dof);
      else
            uSol = zeros(size(A,1),1);
      end
      
      uSol = reshape(uSol,2,[])';

end