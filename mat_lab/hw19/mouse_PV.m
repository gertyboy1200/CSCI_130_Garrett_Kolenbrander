the_file_name = "MousePVloops.xlsx";
D = get_data(the_file_name);

%{
PV_data = string(6);

for n = 1:3
    disp(["enter input number ", n]);
    input_data(n) = input(":");

end

for n = 1:6
   if (mod(n, 2) == 1)
       PV_data(n) = ['P' num2str(input_data((n + 1) / 2))];
   else
       PV_data(n) = ['V' num2str(input_data(n / 2))];
   end
end
%}

PV_data = ["P2", "V2", "P6", "V6", "P18", "V18"];

for n = 1:3
    closest_to_five(n) = Pat5(D.(PV_data((n * 2) - 1)));
    index(n) = find(D.(PV_data((n * 2) - 1)) == closest_to_five(n));
end

for n = 1:3
    figure(1)
    plot(D.(PV_data((n * 2) -1)), D.(PV_data((n * 2))), LineWidth=1.5)
    hold on
end

for n = 1:3
    figure(1)
    plot(closest_to_five(n), D.(PV_data(n * 2))(index(n)) , 'ro')
    hold on
end

xlim([0 35])
ylim([0 1.2])
xlabel("Pressure [cmh20]")
ylabel("Volume [ml]")
title("Mouse Ventilator Data")
legend("input 1", "input 2", "input 3");

function [output] = get_data(the_file_name)
   output = readtable(the_file_name) ;
end


