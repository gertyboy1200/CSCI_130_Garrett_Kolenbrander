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

    string first_name, date;
    int test_result;

    ifstream infile;
    ofstream outfile;

    infile.open("TestResultsData.dat");

    infile >> first_name;
    cout << first_name;
    infile >> test_result;
    cout << test_result;

    
}
