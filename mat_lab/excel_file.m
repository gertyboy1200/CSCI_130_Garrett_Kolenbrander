load('aqidaily2020_COcities_Imported.mat')
 
x = length(PM2p5AQI_Denver);
D = 0;
G = 0;
F = 0;
for i = 1:x,
  if (PM2p5AQI_Denver(i) > 100)
    D = D + 1;
  endif
endfor

for i = 1:x,
  if (PM2p5AQI_FoCo(i) > 100)
    F = F + 1;
  endif
endfor

for i = 1:x,
  if (PM2p5AQI_GJ(i) > 100)
    G = G + 1;
  endif
endfor
disp("the unhealthy number of days in Denver is: "), disp(D)
disp("the unhealthy number of days in GJ is: "), disp(G)
disp("the unhealthy number of days in FoCo is: "), disp(F)

average_D = 0;
for i = 1:x,
  average_D = average_D + PM2p5AQI_Denver(i);
endfor
disp(average_D / x)
disp(mean(PM2p5AQI_FoCo))
disp(mean(PM2p5AQI_GJ))