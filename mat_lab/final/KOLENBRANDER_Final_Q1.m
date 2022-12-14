x_in_1 = [0, 1];
x_in_2 = [3, 5];
x_in_3 = [7, 9];
y_in_1 = [0, 1];
y_in_2 = [-1, 1];
y_in_3 = [-1, 1];

x_dec_1 = [1, 3];
x_dec_2 = [5, 7];
x_dec_3 = [9, 10];
y_dec_1 = [1, -1];
y_dec_2 = [1, -1];
y_dec_3 = [1, 0];


plot(x_in_1, y_in_1, 'r', LineWidth=1.5)
hold on
plot(x_dec_1, y_dec_1, 'k', LineWidth=1.5)
plot(x_in_2, y_in_2, 'r', LineWidth=1.5)
plot(x_in_3, y_in_3, 'r', LineWidth=1.5)
plot(x_dec_2, y_dec_2, 'k', LineWidth=1.5)
plot(x_dec_3, y_dec_3, 'k', LineWidth=1.5)

grid on;
title("Triangle Waveform")
ylabel("function Value");
xlabel("Time [s]");
set(gca,'XTick', [0,2,4,6,8,10])
legend("increasing", "decreasing", Location="southeast")