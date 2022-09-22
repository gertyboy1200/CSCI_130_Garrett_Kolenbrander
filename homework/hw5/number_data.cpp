/* Programmer Garrett Kolenbrander
    Date: September 19, 2022
    CSCI_130
    */

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main() {
    cout << "test";
    int data_temp;
    ifstream inFile;
    inFile.open("NumberData1.txt");

    while  (!inFile.eof()) {
        inFile >> data_temp;
        cout << data_temp << endl;

    }
}