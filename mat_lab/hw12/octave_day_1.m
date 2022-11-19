deltaT = 0.005;
t = 0:deltaT:20;

s = sin(11*pi*t).*exp(-0.2*t);
figure(1)
plot(t,s)
xlabel('time[seconds]')
ylabel('signal of love interest [units]')
title('lovely')
