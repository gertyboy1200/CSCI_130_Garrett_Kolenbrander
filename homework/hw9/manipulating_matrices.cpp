#include <iostream>
#include <iomanip>

using namespace std;

void print_matrix (int hello[][3], int number_of_rows, int number_of_coloums) {
for (int i = 0; i < number_of_rows; i++){
        for (int j = 0; j < number_of_coloums; j++){
        cout << hello[i][j] << fixed << setw(5);
        }
    cout << "\n";
    }

}





int main(){
    int number_of_rows = 10;
    int number_of_coloums = 3;
    int hello[10][3] = { 
    {50, 68, 58}, 
    {58, 115, 78}, 
    {62, 110, 81}, 
    {66, 124, 110}, 
    {64, 152, 121}, 
    {46, 143, 90}, 
    {46, 143, 90}, 
    {25, 91, 91}, 
    {27, 19, 59}, 
    {17, 13, 27} 
    };

    print_matrix(hello, number_of_rows, number_of_coloums);

    return 0;
}

