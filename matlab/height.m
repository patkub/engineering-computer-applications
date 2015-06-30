% HEIGHT find the height of the rocket at time t.
%
%   H = height(t)
%   t - time in seconds
function H = height(t)
    H = -(9.8 / 2) * t .^ 2 + 125 * t + 500;
end