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

    int data_temp;
    ifstream inFile;
    inFile.open("NumberData1.txt");

    while  ( (inFile >> data_temp) ) {
        inFile >> data_temp;
        cout << data_temp << endl;

    }
}