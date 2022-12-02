MyCell = readcell('PieInterest.xlsx');
PieOrder = { MyCell{1,2} MyCell{1,4} MyCell{1,6} MyCell{1,8} MyCell{1,10} MyCell{1, 12}};
Interest = [ MyCell{2:end,2}; MyCell{2:end,4}; MyCell{2:end,6}; MyCell{2:end,8}; MyCell{2:end,10}; MyCell{2:end,12}; ];
Interest = Interest';

avg_int = mean(Interest);
[M_best, best_pie] = max(avg_int);
[M_worst, worst_pie] = min(avg_int);

disp(['The most popular pie is ' PieOrder{best_pie}]);
disp(['The least popular pie is ' PieOrder{worst_pie}]);

count = 1;

for i = 1:2:12 
    for n = 2:1:length(MyCell(:,1)) 
        if strcmp('Colorado', MyCell{n,i})
            COloc(count) = n - 1;
            count = count + 1;
            break;
        end
    end
end

[M_best_co, best_pie_co] = max(COloc);
[M_worst_co, worst_pie_co] = min(COloc);

disp(['The most popular pie in colorado is ' PieOrder{best_pie_co}]);
disp(['The least popular pie in colorado is ' PieOrder{worst_pie_co}]);
