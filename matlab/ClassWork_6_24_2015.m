% ClassWork Patrick Kubiak 6-24-2015

%% 3D Polting
clear all
clc

% define Z
z1 = [1:10];
z2 = [2:2:20];
z3 = [3:12];
Z = [z1; z2; z3];

% make X and Y same size
x = linspace(1, 50, 10);
y = linspace(500, 1000, 3);
[X, Y] = meshgrid(x, y);

% mesh it
figure(1);
mesh(X, Y, Z);

figure(2);
mesh(Y, X, Z);

%% printing
A = 5
fprintf('Good golly Molly, there are %8.2f cows in the barn\n\n', A);
B = 0:10:100;
fprintf('Good golly Molly, there are %8.2f cows in the barn\n', B);

%% ginput
x = 0 : pi / 10 : 2 * pi;
y = sin(x);
plot(x, y);
grid on;
[X, Y] = ginput;        % click and hit enter to use ginput
X
Y
Z = polynomial(X, Y)
