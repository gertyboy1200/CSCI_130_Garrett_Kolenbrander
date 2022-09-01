#include <iostream>
using namespace std;
int main() {
cout << "2 + 5 = " << 2+5 << endl;
cout << "5 % 2 = " << 5 % 2 << endl;// this is mod gives the remainder of the division
cout << "-10 % 4 = " << -10 % 4 << endl;
cout << "2.375E-5 * 5.23E-8 = " << 2.375E-5 * 5.23E-8 << endl;
cout << 3 / 2 + 5.5 << endl; // returna 6.5 because 3 and 2 are integers
cout << 3 / 2.0 + 5.5 << endl; // returns 7 because of the decimal included in the 2

//teseting char data tyoes
char letter_1;
letter_1 = 'h';
cout << "letter_1 = " << letter_1 << endl;

//inputs
int myInt;
cout << "input an int: ";
cin >> myInt;
cout << "you entered: " << myInt << endl;

}