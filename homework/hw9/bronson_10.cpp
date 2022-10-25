#include <iostream>
#include <iomanip>
using namespace std;

void print_matrix (int grades[][8], int number_of_rows, int number_of_coloums) {
    for (int i = 0; i < number_of_rows; i++){
        for (int j = 0; j < number_of_coloums; j++){
            cout << grades[i][j] << fixed << setw(21);
        }
        cout << "\n";
    }
}

int average_grade_one(int grades[][8], int r) {
    int sum = 0, average = 0;
    for (int i = 1; i < 5; i++)
        sum = sum + grades[r][i];
    average = sum / (4);
    return average;
}

int average_grade_two(int grades[][8], int r) {
    int sum = 0;
    sum = 0.2 * grades[r][1] + 0.3 * grades[r][2] + 0.3 * grades[r][3] + 0.2 * grades[r][4];
    return sum;
}

int lowest_value(int grades[][8], int r){
   int temp = grades[r][1];
   for(int i=1; i<5; i++) {
      if(temp>grades[r][i]) {
         temp=grades[r][i];
      }
   }
   return temp;
}

int top_scores_average (int grades[][8], int r){
    int sum = 0, average = 0; 
    for (int i = 1; i < 5; i++){
        if (grades[r][i] == lowest_value(grades, r)) {
            for (int j = (i + 1); j < 5; j++){
                sum = sum + grades[r][j];
            }
            average = sum / 3;
            return average;
        } else {
            sum = sum + grades[r][i];
        }
    }
    return -1;
}

int main() {
    int number_of_rows = 5;
    int number_of_coloums =8; 
    int grades [60][8] = {{1, 100, 100, 100, 100}, {2, 100, 0, 100, 0}, {3, 82, 94, 73, 86}, {4, 64, 74, 84, 94}, {5, 94, 84, 74, 64}};
    string headers[8] = {"Student", "Grade1", "Grade2", "Grade3", "Grade4", "Average", "Weighted", "AVG of Top Scores"};

    for (int r = 0; r < number_of_rows; r++){
        grades[r][5] = average_grade_one(grades, r);
        grades[r][6] = average_grade_two(grades, r);
        grades[r][7] = top_scores_average(grades, r);
    }

    for (int i = 0; i < 8; i++)
        cout << headers[i] << setw(20);
    cout << "\n";

    print_matrix(grades, number_of_rows, number_of_coloums);

    return 0;
}