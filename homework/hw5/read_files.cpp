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

    string first_name;
    string date;
    int test_result;
    int count = 0;
    int total_cases = 0;

    ifstream inFile;
    ofstream outFile;


    inFile.open("TestResultsData.txt");

    if (inFile.is_open()) {
        cout << "the file is open" << endl;

    } else {

        cout << "cant open file";
    }
    
    
    
    inFile >> date;
    cout << "the date is: " << date << endl;
    inFile >> first_name;
    inFile >> test_result;

    while (inFile) {

        total_cases = total_cases + test_result;
        count++;

        inFile >> first_name;
        inFile >> test_result;
    }

    cout << "the total number of cases: " << total_cases << endl;
    cout << "number of cases tested: " << count << endl;

    inFile.close();

}