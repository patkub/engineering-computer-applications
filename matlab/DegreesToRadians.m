clc
clear all
close all

% input
first = input('Enter the first value: ');
last = input('Enter the last value: ');
incr = input('Enter the increment: ');

% conversion
degrees = [first : incr : last];
conversion_factor = pi / 180;
radians = degrees * conversion_factor;
table = [degrees; radians];

% output
file = fopen('output.txt', 'wt');   % wt - write, rd - read
length = fprintf(file, '%0.4f degrees is %2.4f in radian\n', table)
content = sprintf('%0.4f degrees is %2.4f in radian\n', table)
