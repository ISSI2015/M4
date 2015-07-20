function V = vertexInverse( TR )

      V = sparse([ TR.Points(TR.ConnectivityList',:) ones(numel(TR.ConnectivityList),1) ]');
      V = mat2cell( V, 3, 3*ones( 1,1/3*size(V,2) ) );
      V = cellfun( @inv , V, 'UniformOutput', false );
      V = cellfun( @deleteColumn , V, 'UniformOutput', false );
      
end

function V = deleteColumn( V )

      V(:,end) = [];

end