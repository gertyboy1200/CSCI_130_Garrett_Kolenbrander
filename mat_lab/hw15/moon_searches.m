
clear all; close all;

[week, number_of_searches] = readvars('SearchesForFullMoon_Year.xlsx');
mean_pop = mean(number_of_searches);

figure(1)
plot(week, number_of_searches, 'k', LineWidth = 1.5)
hold on;
yline(mean_pop, 'r', LineWidth=1.5);
ylim([0, 110]);
xlabel('Week');
ylabel('Popularity');
title('Popularity of Moon Searches');
legend("By Week", "Average", Location = "northwest");

saveas(figure(1), "SearchesForFullMoon_Year", 'jpg');