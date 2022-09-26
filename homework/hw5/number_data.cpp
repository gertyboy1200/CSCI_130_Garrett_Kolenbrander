#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main() {

    int data_temp;
    int total = 0;
    int counter = 0;
    
    ifstream inFile;
    inFile.open("NumberData1.txt");

    while  (inFile >> data_temp) {
        if (data_temp >= 0) {
            total = total + data_temp;
            counter++;
        }else {
            cout << "the code encountered invalid data. The invalid data point is " << data_temp << ". The code will not use the rest of the data......." << endl;
            break;
        }

    }

    cout << "the sum of the valid data is: " << total << endl;
    cout  << "the total number of data points is: " << counter << endl;
    cout << "the average of the valid data is: " << total / counter << endl;

}