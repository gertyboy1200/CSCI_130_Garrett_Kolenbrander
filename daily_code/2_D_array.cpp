#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int number_of_rows = 3;
    int number_of_coloums = 2;
    int my_mattrix[3][2] = { {1,2}, {3, 4}, {5, 6} };
    for (int i; i < number_of_rows; i++)
        for (int j; j < number_of_coloums; j++)
        cout << fixed << setw(5) << my_mattrix[i][j];
        string letters[2][4] = {
                { "A", "B", "C", "D" },
                { "E", "F", "G", "H" }
                };
}

