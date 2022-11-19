
close all; clear all; 

filename = 'MousePVloops.xlsx';
[P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, ...
    V2, V3, V4, V5, V6, V7, V8, V9, V10, V11, V12, V13, V14, V15, V16, V17, V18, V19] = readvars(filename);
disp(['Data is from the file: ' filename]);

input_1 = input('select a number between 2 and 19: ');
input_2 = input('select another number between 2 and 19: ');

if (input_1 == input_2)
    disp("choose 2 different numbers")
end

switch input_1
    case 2
        plot(P2,V2,LineWidth=1.2,Color= [0 0.6 0.6]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 3
        plot(P3,V3,LineWidth=1.2,Color= [0 0.6 0.6]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 4
        plot(P4,V4,LineWidth=1.2,Color= [0 0.6 0.6]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 5
        plot(P5,V5,LineWidth=1.2,Color= [0 0.6 0.6]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 6
        plot(P6,V6,LineWidth=1.2,Color= [0 0.6 0.6]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 7
        plot(P7,V7,LineWidth=1.2,Color= [0 0.6 0.6]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 8
        plot(P8,V8,LineWidth=1.2,Color= [0 0.6 0.6]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 9
        plot(P9,V9,LineWidth=1.2,Color= [0 0.6 0.6]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 10
        plot(P10,V10,LineWidth=1.2,Color= [0 0.6 0.6]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 11     
        plot(P11,V11,LineWidth=1.2,Color= [0 0.6 0.6]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 12
        plot(P12,V12,LineWidth=1.2,Color= [0 0.6 0.6]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 13
        plot(P13,V13,LineWidth=1.2,Color= [0 0.6 0.6]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 14
        plot(P14,V14,LineWidth=1.2,Color= [0 0.6 0.6]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 15
        plot(P15,V15,LineWidth=1.2,Color= [0 0.6 0.6]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 16
        plot(P16,V16,LineWidth=1.2,Color= [0 0.6 0.6]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 17
        plot(P17,V17,LineWidth=1.2,Color= [0 0.6 0.6]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 18
        plot(P18,V18,LineWidth=1.2,Color= [0 0.6 0.6]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 19
        plot(P19,V19,LineWidth=1.2,Color= [0 0.6 0.6]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    otherwise
        disp('error entered an invalid number')
end

switch input_2
    case 2
        plot(P2,V2,LineWidth=1.2,Color= [0 0 0]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 3
        plot(P3,V3,LineWidth=1.2,Color= [0 0 0]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 4
        plot(P4,V4,LineWidth=1.2,Color= [0 0 0]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 5
        plot(P5,V5,LineWidth=1.2,Color= [0 0 0]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 6
        plot(P6,V6,LineWidth=1.2,Color= [0 0 0]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 7
        plot(P7,V7,LineWidth=1.2,Color= [0 0 0]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 8
        plot(P8,V8,LineWidth=1.2,Color= [0 0 0]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 9
        plot(P9,V9,LineWidth=1.2,Color= [0 0 0]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 10
        plot(P10,V10,LineWidth=1.2,Color= [0 0 0]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 11     
        plot(P11,V11,LineWidth=1.2,Color= [0 0 0]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 12
        plot(P12,V12,LineWidth=1.2,Color= [0 0 0]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 13
        plot(P13,V13,LineWidth=1.2,Color= [0 0 0]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 14
        plot(P14,V14,LineWidth=1.2,Color= [0 0 0]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 15
        plot(P15,V15,LineWidth=1.2,Color= [0 0 0]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 16
        plot(P16,V16,LineWidth=1.2,Color= [0 0 0]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 17
        plot(P17,V17,LineWidth=1.2,Color= [0 0 0]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 18
        plot(P18,V18,LineWidth=1.2,Color= [0 0 0]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    case 19
        plot(P19,V19,LineWidth=1.2,Color= [0 0 0]), ...
            xlabel("Pressure (units)"), ylabel("Volume (units)");
    otherwise
        disp('error entered an invalid number')
end