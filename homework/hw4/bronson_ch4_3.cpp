#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    cout << "input the numbers a then b: ";
    cin >> a >> b;

    if ( a > b) {
        cout << "the first number is greater!!";
        return 0;
    } else if (a < b) {
        cout << "the second number is greater!!";
        return 0;
    } else{
        cout << "the numbers are equal";
    }
    
}