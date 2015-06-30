% HW-7 - Patrick Kubiak - 6/22/2015

%% Problem 3.17
clear all   % clear workspace
clc

G = [68, 83, 61, 70, 75, 82, 57, 5, 76, 85, 62, 71, 96, 78, 76, 68, 72, 75, 83, 93]
sorted_G = sort(G)
mean_G = sum(G) / length(G)
median_G = median(G)
mode_G = mode(G)
std_G = std(G)

% the median better represents the "most typical grade" because it's the
% center of the data set

%% Problem 3.21
clear all   % clear workspace
clc

a = 2;      % standard deviation
b = 70;     % mean
temps = a .* randn(121, 1) + b;
time = [0:20:120];
[time_graph, temps_graph] = meshgrid(time, temps);

% plot
plot(time_graph, temps_graph)
title('Time vs Temperature');
xlabel('Time (hours)');
ylabel('Temperature (^{\circ}C)');
grid on;

max_temp = max(temps)
min_temp = min(temps)

%% Problem 4.6
clear all   % clear workspace
clc

base = [0:10];
height = [2:6];
[B, H] = meshgrid(base, height);
Area = B .* H

%% Problem 4.7
clear all   % clear workspace
clc

% definitions
pressures_kPa = [0:5:100];              % 0 to 100 kPa in increments of 5
pressures_Pa = pressures_kPa * 1000;    % pressures in Pa (1 km / m s^2)

mercury_density = 13560; % kg / m^3
water_density = 1000;    % kg / m^3
grav_accel = 9.81;       % m / s^2

% barometer 1 - mercury h = P / (pg)
height_mercury = pressures_Pa / (mercury_density * grav_accel);

% barometer 2 - water h = P / (pg)
height_water = pressures_Pa / (water_density * grav_accel);

% result
table = [pressures_kPa', height_mercury', height_water']
