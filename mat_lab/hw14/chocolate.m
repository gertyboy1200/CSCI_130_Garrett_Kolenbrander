[week, number_of_searches] = readvars("SearchesForChocolate.xlsx");
[number_max, index] = max(number_of_searches);
week_max = week(index);
plot(week, number_of_searches, 'k')
hold on;
plot(week_max, number_max, 'ro')
xlabel('Week')
ylabel('Popularity')
title('Popularity of Chocolate Searches')
