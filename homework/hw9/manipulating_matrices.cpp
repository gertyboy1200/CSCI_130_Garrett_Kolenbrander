#include <iostream>
#include <iomanip>
using namespace std;

void print_matrix (int AQI[][3], int number_of_rows, int number_of_coloums) {
    for (int i = 0; i < number_of_rows; i++){
        for (int j = 0; j < number_of_coloums; j++){
            cout << AQI[i][j] << fixed << setw(5);
        }
        cout << "\n";
    }
}

int find_unhealty_level(int AQI[][3], int number_of_rows, int c) {
    int count = 0; 
    int unhealthy_level = 101;
    
    for (int r = 0; r < number_of_rows; r++){
        if (unhealthy_level <= AQI[r][c]){
            count++;
        }
    }
    return count;
}

int average_AQI(int AQI[][3], int number_of_rows, int c) {
    int sum, average;
    for (int i = 0; i < number_of_rows; i++) {
        sum = sum + AQI[i][c];
    }
    average = sum / number_of_rows;
    return average;
}

int main(){
    int number_of_rows = 10;
    int number_of_coloums = 3;
    int AQI[10][3] = { {50, 68, 58}, {58, 115, 78}, {62, 110, 81}, {66, 124, 110}, {64, 152, 121}, {46, 143, 90}, {46, 143, 90}, {25, 91, 91}, {27, 19, 59}, {17, 13, 27}};
    string cities[3] = {"Grand Junction", "Fort Collins", "Denver/Boulder"};
    print_matrix(AQI, number_of_rows, number_of_coloums);
    for (int c = 0; c < number_of_coloums; c++){
        cout << "the number of unheathly days in " << cities[c] << " is " << find_unhealty_level(AQI, number_of_rows, c) << endl;
        cout << "the average AQI for " << cities[c] << " is " << average_AQI(AQI, number_of_rows, c) << endl;
    }
    return 0;
}