
%x_in = input ("input x: ");
%y_in = input ("input y: ");
x = 4;
y = 7;
[t, r] = car_to_polar(x_in, y_in);
display(t, r)

function  display(t, r)
    disp(["theta is:" , t, " r is:", r])
end