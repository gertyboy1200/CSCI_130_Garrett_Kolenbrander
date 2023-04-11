/*
    Loops Lab
    Updated By: FIXME1
    CSCI 111
    Date: FIXME2
    Program prints geometric shapes of given height with * using loops
*/
 
#include <iostream>
#include <iomanip>
#include <string>
 
using namespace std;
 
 
void printTriangle(int height) {
    int row = 1;
    while (row <= height) {
        for(int col = 1; col<=row; col++)
            cout << "* ";
        row += 1;
        cout << endl;
    }
}
 
 
void printFlippedTriangle(int height) {
      int row = height;
    while (row >= 1) {
        // column
        for(int col = 1; col <= row; col++)
            cout << "* ";
        row--;
        cout << endl;
    }
}
 
 
void printSquare(int height){
    for(int i = 0; i < height; i ++){
        for(int j = 0; j < height; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
 
void clearScreen() {
    #ifdef _WIN32
        system("clS");
    #else
        system("clear");
    #endif
}
 
int main(int argc, char* argv[]) {
    char loopCondition = 'y';
    while(loopCondition == 'Y' || loopCondition == 'y'){
    int height;
    clearScreen();
    cout << "Program prints geometric shapes of given height with *\n";
    cout << "Please enter the height of the shape: ";
    cin >> height;
    printTriangle(height);
    printFlippedTriangle(height);
    printSquare(height);

    cout << "would you like to continue? Press y/Y: ";
    cin >> loopCondition;
    }
 
    return 0;
}