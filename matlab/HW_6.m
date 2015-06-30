% HW-6 - Patrick Kubiak - 6/16/2015

%% Problem 2.1
clear all   % clear workspace

1 + 3 / 4
5 * 6 * 4 / 2
5 / 2 * 6 * 4
5 ^ 2 * 3
5 ^ (2 * 3)
1 + 3 + 5 / 5 + 3 + 1
(1 + 3 + 5) * (5 + 3 + 1)

%% Problem 2.7
clear all   % clear workspace

% constants
P = 220
n = 2
V = 1
a = 5.536
B = 0.03049
R = 0.08314472

% Ideal Gas Law
% PV = nRT or T = (PV)/(nR)
T = (P * V) / (n * R)

% van der Waals' equation
T = ((P + (((n ^ 2) * a) / (V ^ 2))) * (V - n * B)) / (n * R)

%% Problem 2.8
r = 3;
h = [1, 5, 12];
v = (r^2) * h

b = [2, 4, 6];
h = 12;
a = (1 / 2) * b * h

vertical = 6;
volume = a * vertical

%% Problem 2.13
clear all   % clear workspace

% feet to meters
feet = [0:1:10];
meters = feet * 0.3048;
feetToMeters = [feet', meters']

% radians to degrees
radians = [0:0.1 * pi:pi];
radians_to_degrees = 180 / pi;
degrees = radians * radians_to_degrees;
radiansToDegrees = [radians', degrees']

% mi/h to ft/s
mph = linspace(0, 100, 15);
mph_to_fps = 5280/3600;
fps = mph * mph_to_fps;
mphToFps = [mph', fps']

% concentration of hydronium ions to pH
H_conc = logspace(0.001, 0.1, 10);   % concentration of hydronium ions
pH = -log10(H_conc);

pOHtopH = [H_conc', pH']

%% Problem 2.14
clear all   % clear workspace

g = 9.8;                % acceleration due to gravity

time = [0:10:100];      % time in increments of 10
distance = (1 / 2) * g * time .^ 2;     % distance traveled
timevsDistance = [time', distance']     % time vs distance traveled

%% Problem 3.1
clear all   % clear workspace

nthroot(-5, 3)
ans ^ 3
(-5) ^ (1 / 3)
ans ^ 3

%% Problem 3.2
clear all   % clear workspace

% log_b of 10 where b is defined from 1 to 10 in increments of 1
for i = 1:10
    log(10) / log(i)
end

%% Problem 3.3
clear all   % clear workspace

e = vpa(exp(1), 50);    % calculate e to 50 digits
P_0 = 100;              % original population
r = 0.9;                % continuous growth rate
t = 10;                 % time in years
P = P_0 * e ^ (r * t)   % population after t years

%% Problem 3.5
clear all   % clear workspace

% heat energy per second
bulb_energy = 100;                      % bulbs
bulbs = 20 * bulb_energy;

appliance_energy = 500;                 % appliances
appliances = 4 * appliance_energy;

outside = 3000;                         % outside
total = bulbs + appliances + outside    % total

units_needed = total / 2000             % units needed to keep constant temperature

%% Problem 3.13
clear all   % clear workspace

distance = 120;
angle = 30;
angle_delta = 3;

% min height
h = distance * abs(tan(angle - angle_delta))

% min height
h = distance * abs(tan(angle + angle_delta))

%% Problem 3.14
clear all   % clear workspace

height = 200;
distance = 20;

% h = d * tan(angle)
angle = atan(height / distance)

% head to top of building
headToTop = height / sin(angle)
headToTop = distance / cos(angle)

%% Problem 4.1
clear all   % clear workspace

% definitions
a = [15, 3, 22; 3, 8, 5; 14, 3, 82];
b = [1; 5; 6];
c = [12, 18, 5, 2];

% new matrices
d = a(3, :)        % third row of matrix a
e = [b, d']        % two-dimensional matrix with 3 rows and 2 columns (matrices b and d)
f = [b; d']        % one-dimensional matrix with 6 rows and 1 column (matrices b and d)
g = [a; c(1:3)]    % matrix a and the first three elements of matrix c, with 4 rows and 3 columns
h = [a(1,3), c(1,2), b(2,1)]    % matrix with first element equal to a(1, 3), second element equal to c(1, 2), and third element equal to b(2, 1)

%% Problem 4.3
clear all   % clear workspace

times = [0:2:24]';  % column vector going from 0 to 24 in 2-hour increments.

% thermocouple data
thermocouple1 = [84.3, 86.4, 85.2, 87.1, 83.5, 84.8, 85.0, 85.3, 85.3, 85.2, 82.3, 84.7, 83.6]';
thermocouple2 = [90.0, 89.5, 88.6, 88.9, 88.9, 90.4, 89.3, 89.5, 88.9, 89.1, 89.5, 89.4, 89.9]';
thermocouple3 = [86.7, 87.6, 88.3, 85.3, 80.3, 82.4, 83.4, 85.4, 86.3, 85.3, 89.0, 87.3, 87.2]';

% construct data table
data = [times, thermocouple1, thermocouple2, thermocouple3]

% determine the maxmimum value and the index at which it occurs for each thermocouple.
[thermocouple1_max_value, thermocouple1_max_index] = max(data(:, 2), [], 1);
[thermocouple2_max_value, thermocouple2_max_index] = max(data(:, 3), [], 1);
[thermocouple3_max_value, thermocouple3_max_index] = max(data(:, 4), [], 1);

% determine the minimum value and the index at which it occurs for each thermocouple.
[thermocouple1_min_value, thermocouple1_min_index] = min(data(:, 2), [], 1);
[thermocouple2_min_value, thermocouple2_min_index] = min(data(:, 3), [], 1);
[thermocouple3_min_value, thermocouple3_min_index] = min(data(:, 4), [], 1);

% display results in tables with time and max/min value
maxMinThermocouple1 = [times(thermocouple1_max_index), thermocouple1_max_value;
                       times(thermocouple1_min_index), thermocouple1_min_value;]

maxMinThermocouple2 = [times(thermocouple2_max_index), thermocouple2_max_value;
                       times(thermocouple2_min_index), thermocouple2_min_value;]
                   
maxMinThermocouple3 = [times(thermocouple3_max_index), thermocouple3_max_value;
                       times(thermocouple3_min_index), thermocouple3_min_value;]
