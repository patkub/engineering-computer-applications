% ClassWork Patrick Kubiak 6-17-2015

%% ClassWork-1
degrees = [0, 25, 16, 90, 180, 360];
conversion_factor = pi / 180;
radians = degrees * conversion_factor;
table = [degrees; radians]'                 %% or table = [degrees', radians']

%% Example 2.3 Calculating Drag
drag = 20000;
Rho = 1e-6;
V = 100;    % 100 mph
V_mps = V * (4 / 9);
Area = 1;
Cd = 2 * drag / (Rho * V_mps^2*Area);
Vel = linspace(1, 200, 10);     % mph
Vel_mps = Vel * (4 / 9);        % vector with 10 elements
Drag = (Cd * Rho .* (Vel_mps.^2) * Area)/2

