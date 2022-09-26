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
        if (inFile == false) {
            cout << "error";
        }else {
            total_cases = total_cases + test_result;
            count++;
            inFile >> first_name;
            inFile >> test_result;
        }
    
    }

    cout << "the total number of cases: " << total_cases << endl;
    cout << "number of cases tested: " << count << endl;

    inFile.close();

    inFile.open("TestReslutsData.dat");
    outFile.open("AnalyzedData.txt");
    inFile >> date;
    cout << date << endl;

    outFile << date << endl;
    outFile << "the total number of cases: " << total_cases << endl;
    outFile << "number of cases tested: " << count << endl;
    outFile << fixed << showpoint << setprecision(2);
    outFile << "the prevalence is: ";
    outFile << ((static_cast<double>(total_cases)) / count) * 100 << "%";
    outFile.close();

}