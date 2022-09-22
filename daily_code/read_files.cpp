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
    string first_name;
    string date;
    int test_result;

    fstream inFile;
    ofstream outFile;

    cout << "test" << endl

    inFile.open("TestResultsData.dat");

    if (inFile.is_open()) {
        cout << "the file is open";

    } else {

        cout << "cant open file";
    }
    
    
    
    /*inFile >> date >> first_name;
    inFile >> first_name;
    inFile >> test_result;
    cout << date << first_name << endl;
    
    cout << first_name << " ";
    cout << test_result << endl; */


}
