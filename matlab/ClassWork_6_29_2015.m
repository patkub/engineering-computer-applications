% ClassWork Patrick Kubiak 6-29-2015

%% U.S. Naval Accademy Acceptable Candidates
height = [63, 67, 65, 72, 69, 78, 75];
accept = find(height >= 66);
validHeights = height(accept);
result = [accept; validHeights];

disp('The following candidates meet the height requirement (taller than 66):');
fprintf('Candidate #%i is %2.0f inches tall.\n', result);

age = [18, 19, 18, 20, 36, 34, 12];
applicants = [height', age'];

applicant_height = applicants(:, 1);
applicant_age = applicants(:, 2);

[row, col] = find(applicant_age >= 18 & applicant_age <= 35 & applicant_height >= 66);
result = [row'; height(row); age(row)];

fprintf('\nThe following candidates are eligible (taller than 66 and age between and inclusive of 18 and 35:\n');
fprintf('Candidate #%i is %2.0f inches tall and %i years old.\n', result);

%% Patients
stations = [95.3, 100.2, 98.6; 97.4, 99.2, 98.9; 100.1, 99.3, 97];
fever_index = find(stations > 98.6);
[patient, station] = find(stations > 98.6);
temp = stations(fever_index);
result = [patient'; station'; temp'];
fprintf('Patient #%1.0f at station #%1.0f has fever of %3.2f Fahrenheit.\n', result);

%% Natural Log
value = input('Enter a number to calculate the natural log: ');
if (value > 0)
    result = log(value);
    result = [value; result];
    fprintf('The natural log of %2.0f is %2.0f.\n', result);
else
    disp('The input is less than zero.');
end

%% Menu
city = menu('Select a city from the menu:', 'Boston', 'Denver', 'Honolulu');

switch city
    case 1
        disp('$345')
    case 2
        disp('$150')
    case 3
        disp('Stay home and study')
end

%% For Loop

for k = 1:5
    a(k) = k ^ 2
end

for i = [1 3 7]
    b(i) = i
end

%% Find Scores
scores = [98, 76, 78, 65, 92, 93];
count = 0;

for i = 1:length(scores)
    if (scores(i) >= 90)
        count = count + 1;
        result(count) = scores(i);
    end
end

result;
count;

count = 0;
i = 1;
while (i <= length(scores))
   if (scores(i) >= 90)
        result(i) = scores(i);
        count = count + 1;
   end
   i = i + 1;
end

result
count

%%

A = [1 2 3 4; 5 7 9 10; -1 12 13 0];
max(A)

[row, col] = size(A);

for i = 1:col
    maximum(i) = A(1, col);
    for j = 1:row
        num = A(j, i);
        
        if (num > maximum(i))
            maximum(i) = num;
        end
    end
end

maximum
