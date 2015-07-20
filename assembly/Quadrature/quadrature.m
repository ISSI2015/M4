function Q = quadrature(number,lineNumber)
% Returns a structure containing quadrature nodes and weights as well as their number.
if(nargin == 1)
	if(isscalar(number))
		lineNumber = number;
	else
		lineNumber = number(2);
		number = number(1);
	end
end

switch number
	case 1,
		weights = 0.5;
		points = [1/3;1/3];
		order = 1;
	case 2,
		weights = [1/6, 1/6, 1/6];
		points = [0.5 0; 0.5 0.5; 0 0.5]';
		order = 2;
	case 3,
		weights = [1/6 ,1/6, 1/6];
		points = [1/6 1/6; 1/6 4/6; 4/6 1/6]';
		order = 2;
	case 4,
		weights = [-9/32, 25/96, 25/96, 25/96];
		points = [1/3 1/3; 0.2 0.2; 0.6 0.2; 0.2 0.6]';
		order = 3;
	case 5,
		A = 0.109951743655322/2;
		B = 0.223381589678011/2;
		r = 0.091576213509771;
		s = 0.445948490915965;
		t = 0.816847572980459;
		u = 0.108103018168070;
		weights = [A A A B B B];
		points = [r r; t r; r t; s s; u s; s u]';
		order = 4;
	case 6,
		A = 9/80;
		B = (155-sqrt(15))/2400;
		C = (155+sqrt(15))/2400;
		t = 1/3;
		r = (6-sqrt(15))/21;
		s = (9+2*sqrt(15))/21;
		u = (6+sqrt(15))/21;
		v = (9-2*sqrt(15))/21;
		weights = [A B B B C C C];
		points = [t t; r r; r s; s r; u u; u v; v u]';
		order = 5;
	otherwise 
		error('There is no such quadrature rule implemented!'); 
end

switch lineNumber
	case 1,
		lineweights = 2;
		linepoints = [0.5 0; 0.5 0.5; 0 0.5]';
	case 2,
		t = 0.5*(sqrt(1/3)+1);	% 0.788675134
		r = 1-t;				% 0.211324865
		lineweights = [1, 1];
		linepoints = [r 0; t 0; t r; r t; 0 t; 0 r]';
	case 3,
		t = 0.5*(sqrt(1/3)+1);	% 0.788675134
		r = 1-t;				% 0.211324865
		lineweights = [1, 1];
		linepoints = [r 0; t 0; t r; r t; 0 t; 0 r]';
	case 4,
		t = 0.5*(sqrt(1/3)+1);	% 0.788675134
		r = 1-t;				% 0.211324865
		lineweights = [1, 1];
		linepoints = [r 0; t 0; t r; r t; 0 t; 0 r]';
	case 5,
		t = 0.5*(sqrt(3/5)+1); 	% 0.887298334 
		r = 1-t;				% 0.112701665
		lineweights = [5/9,8/9,5/9];
		linepoints = [r 0; 0.5 0; t 0; t r; 0.5 0.5; r t; 0 t; 0 0.5; 0 r]';
	case 6,
		t = 0.5*(sqrt(3/5)+1); 	% 0.887298334 
		r = 1-t;				% 0.112701665
		lineweights = [5/9,8/9,5/9];
		linepoints = [r 0; 0.5 0; t 0; t r; 0.5 0.5; r t; 0 t; 0 0.5; 0 r]';
	otherwise
		error('There is no such quadrature rule implemented!');
end

Q = struct('size', length(weights), 'points', points,'weights', weights, ...
		'order', order, 'lineweights',lineweights, 'linepoints',linepoints);

end