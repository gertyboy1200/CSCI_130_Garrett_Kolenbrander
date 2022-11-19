t = 0:0.02:5 - 0.02;

s = (3 * cos(10 * pi * t)) + (2 * exp(-0.5 * t));

figure(1)
plot(t, s, LineWidth=1.5,Color= [0 0 0]), xlabel("time (s)"), ylabel("signal"), title("Signal Graph"), grid on;
