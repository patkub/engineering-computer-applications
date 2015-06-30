% HW-8 - Patrick Kubiak - 6/29/2015

%% Problem 5.1
clear all

x = [0:10];     % domain

% y = e^x
figure('name', 'y = e^x');
y = exp(x);
plot(x, y, 'b');
title('y = e^x');
xlabel('X');
ylabel('Y');
grid on;

% y = sin(x)
figure('name', 'sin(x)');
y = sin(x);
plot(x, y, 'g');
title('y = sin(x)');
xlabel('X');
ylabel('Y');
grid on;

% y = 5x^2 + 2x + 4
figure('name', 'y = 5x^2 + 2x + 4');
y = 5 .* x .^ 2 + 2 .* x + 4;
figure(3);
plot(x, y, 'r');
title('y = 5x^2 + 2x + 4');
xlabel('X');
ylabel('Y');
grid on;

% y = sqrt(x)
figure('name', 'y = sqrt(x)');
y = sqrt(x);
figure(4);
plot(x, y, 'c');
title('y = $\sqrt{x}$', 'interpreter', 'latex', 'FontSize', 14)
xlabel('X');
ylabel('Y');
grid on;

%% Problems 5.3, 5.4, and 5.5
clear all

% start figure in lower left hand corner and set title
hFig = figure('Position', [0, 0, 800, 600], 'Name', 'Sin Functions', 'NumberTitle','off');

% center the figure
movegui(hFig, 'center');

x = [-pi:pi/100:pi];

% y = sin(x)
y = sin(x);
plot(x, y, '--r');  % line 1 is red and dashed
hold on;

% y = sin(2x)
y = sin(2 * x);
plot(x, y, '-b');   % line 2 is blue and solid
hold on;

% y = sin(3x)
y = sin(3 * x);
plot(x, y, ':g');   % line 3 is green and dotted

% plot settings
title('y = sin(x) y = sin(2x) y = sin(3x)');
legend('sin(x)', 'sin(2x)', 'sin(3x)', 'Location', 'NorthEastOutside');
xlabel('X');
ylabel('Y');
grid on;
xlim([-6 6]);       % x axis goes from -6 to +6

str = {'Plot of sin(x), sin(2x),', 'and sin(3x)', '', 'x axis goes from', '-6 to +6'};
annotation('textbox', [0.8,0.4,0.1,0.1], 'String', str);

%% Problems 5.6 and 5.7
clear all

V_0 = 100;          % initial velocity in m/s
theta = pi / 4;     % launch angle is 45 degrees
g = 9.8;            % acceleration due to gravity in m/s^2
time = 0:0.01:20;   % 0 to 20 seconds with spacing of 0.1 seconds

horizontal = time * V_0 * cos(theta);
vertical = time * V_0 * sin(theta) - (1 / 2) * g * time .^ 2;

% PLOT 1: horizontal distance vs time
figure('name', 'Horizontal Distance vs Time');
plot(time, horizontal);    % horizontal distance vs time

% plot settings
title('Projectile Horizontal Distance vs Time');
xlabel('X');
ylabel('Y');
grid on;

% PLOT 2: vertical distance vs time
figure('name', 'Vertical Distance vs Time');
plot(time, vertical);     % vertical distance vs time

% plot settings
title('Projectile Vertical Distance vs Time');
xlabel('X');
ylabel('Y');
grid on;

% PLOT 3: horizontal distance vs vertical distance
figure('name', 'Horizontal Distance vs Vertical Distance');
plot(horizontal, vertical);    % horizontal distance vs vertical distance

% plot settings
title('Projectile Horizontal Distance vs Vertical Distance');
xlabel('X');
ylabel('Y');
grid on;

%% Problem 6.1
clear all

% number of grains for ASTM grain sizes n = 10 to 100
n = [10:100];
N = num_grains(n);

% plot
figure('name', 'ASTM Grain Size vs Number of Grains');
plot(n, N);

% plot settings
title('ASTM Grain Size vs Number of Grains');
xlabel('ASTM Grain Size');
ylabel('Number of Grains');
grid on;

%% Problem 6.7
clear all

time = [0:0.5:30];      % 0 to 30 seconds
h = height(time);       % height

% plot
figure('name', 'Height vs Time');
plot(time, h);

% plot settings
title('Height vs Time');
xlabel('Time');
ylabel('Height');
grid on;

% time when rocket starts to fall back to the ground
[value, index] = max(h);
maxHeightTime = time(index);
fprintf('The rocket starts to fall back to the ground after %.2f seconds.\n', maxHeightTime);
