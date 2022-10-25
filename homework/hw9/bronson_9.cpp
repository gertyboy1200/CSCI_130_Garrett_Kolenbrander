#include <iostream>
#include <iomanip>
using namespace std;

void print_matrix (int grades[][7], int number_of_rows, int number_of_coloums) {
    for (int i = 0; i < number_of_rows; i++){
        for (int j = 0; j < number_of_coloums; j++){
            cout << grades[i][j] << fixed << setw(16);
        }
        cout << "\n";
    }
}

int average_grade_one(int grades[][7], int r, int number_of_coloums) {
    int sum, average;
    for (int i = 1; i < number_of_coloums; i++)
        sum = sum + grades[r][i];
    average = sum / (number_of_coloums - 1);
    return average;
}

int average_grade_two(int grades[][7], int r, int number_of_coloums) {
    int sum, average;
    sum = 0.2 * grades[r][1] + 0.3 * grades[r][2] + 0.3 * grades[r][3] + 0.2 * grades[r][4];
    average = sum / (number_of_coloums - 1);
    return average;
}

int main() {
    int number_of_rows = 5;
    int number_of_coloums =5; 
    int grades [60][7] = {{1, 100, 100, 100, 100}, {2, 100, 0, 100, 0}, {3, 82, 94, 73, 86}, {4, 64, 74, 84, 94}, {5, 94, 84, 74, 64}};
    string headers[7] = {"Student", "Grade1", "Grade2", "Grade3", "Grade4", "Average", "Weighted"};

    for (int r = 0; r < number_of_rows; r++){
        grades[r][5] = average_grade_one(grades, r, number_of_coloums);
        grades[r][6] = average_grade_two(grades, r, number_of_coloums);
    }

    number_of_coloums = 7; 

    for (int i = 0; i < 7; i++)
        cout << headers[i] << fixed << setw(15);
    cout << "\n";
    
    print_matrix(grades, number_of_rows, number_of_coloums);

    return 0;
}