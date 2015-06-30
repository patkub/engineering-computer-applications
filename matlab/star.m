function [A] = star()
    theta = pi / 2 : 0.8 * pi : 4.8 * pi;
    r = ones(1, 6);
    polar(theta, r)
    
    if (nargout == 1)
        A = 'This function does not have a return value that can be saved in a variable';
    end
end