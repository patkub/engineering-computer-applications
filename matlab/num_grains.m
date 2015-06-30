% NUM_GRAINS find the number of grains (N) in a 1-square-inch area at 100 X
% magnification when the ASTM grain size (n) is known.
%
%   N = NUM_GRAINS(n)
%   n - ASTM grain size
function N = num_grains(n)
    N = 2 .^ (n - 1);
end