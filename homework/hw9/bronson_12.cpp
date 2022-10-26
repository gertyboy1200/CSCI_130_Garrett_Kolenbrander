#include <iostream>
#include <iomanip>
using namespace std;

int * grading(char tests[][5], int number_of_tests, char correct_answers[]) {
    static int points[6];
    for (int r = 0; r < 6; r++){ 
        int test_points = 0;
        for (int i = 0; i < number_of_tests; i++) {
            if (tests[r][i] == correct_answers[i]) {
                test_points = test_points + 5;
            }
        }
        points[r] = test_points;
    }
    return points;
}

int main() {
    int number_of_tests = 6;
    char tests[6][5] = {{'T', 'F', 'T', 'T', 'T'}, {'T', 'T', 'T', 'T', 'T'}, {'T', 'T', 'F', 'F', 'T'}, {'T', 'T', 'F', 'F', 'F'},{'F', 'F', 'F', 'F', 'F'},{'T', 'T', 'F', 'T', 'F'}};
    char correct_answers[5] = {'T', 'T', 'F', 'F', 'T'};
    int *p;
    p = grading(tests, number_of_tests, correct_answers);

    for (int i = 0; i < 6; i++)
        cout << "the grade of test " << i + 1 << " is " << *(p + i) << endl;

    return 0;
    }