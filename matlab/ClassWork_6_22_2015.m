% ClassWork Patrick Kubiak 6-22-2015

%% Ashville
clear all
Ashville = xlsread('test-scores\Ashville_1999');
mean_max = Ashville(:, 2);   % all rows in column 2
mean_min = Ashville(:, 3);   % all rows in column 3

max_2 = max(mean_max)
min_3 = min(mean_min)

%% Test scores
clear all
TestScores = xlsread('test-scores\sample_test_score_2.xlsx');
student_5 = TestScores(5, :)
quiz_1 = TestScores(:, 2)

std_dev = std(quiz_1)
variance = var(quiz_1)

student_5_quizzes = TestScores(5, 2:6)
student_5_quiz_average = (sum(student_5_quizzes) / length(student_5_quizzes)) * 10
student_5_test_average = (student_5_quiz_average + TestScores(5, end)) / 2

%% Distance to Horizon
clear all

radii = [1737, 6378];   % radii in km
height = 0:8;           % mountain height in km
[R, H] = meshgrid(radii, height);

distance = sqrt(H .^ 2 + 2 .* R .* H);
table = [height', distance]

%% Handel Messiah
clear all
load handel
sound(y, Fs)
pause
noise = randn(length(y), 1) * 0.1
sound(noise + y, Fs)

%% Plot
clear all
time = 0:2:18
Ft = [0, 0.33, 4.13, 6.29, 6.85, 11.19, 13.19, 13.96, 16.33, 18.17]
figure(1)
plot(time, Ft, 'g')
title('Patrick''s Laboratory Experiment 1');
xlabel('Time, Sec');
ylabel('Distance, Feet');
grid on;

x = [0:pi / 10:2 * pi]
y = sin(x);
figure(2)
plot(x, y)

%% Plot 2
x = 0:pi / 20:2 * pi;
y1 = sin(x);
y2 = exp(x);
plotyy(x, y1, x, y2)    % 2 scales on a single graph
