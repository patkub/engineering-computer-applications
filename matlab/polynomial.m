% POLYNOMIAL substitute a value into a polynomial and get the result.
%   B = POLYNOMIAL(X, Y)
%
% this function calculates a given polynomial function
% the input argument for this function can be of any type.
% i.e. scalars, vectors, matrices, etc.
function B = polynomial(x, y)
    B = 2 .* x .^ 2 - 3 + y .^3 + 4 .* x;
end
