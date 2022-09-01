//programer: Garrett Kolenbrander
//date 8/31/22
//course CSCI130
//Practice with IO functions

#include <iostream>
#include <string>
using namespace std;
int main() {
    char c1, c2, c3, c4, ch_p;
    int n;
    string testStr, testStr2;

    cout << "type A 51 : ";
    cin >> c1 >> c2 >> n; 

    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "n = " << n << endl;

    cout << "Type A 51 :";
    cin.get(c1);
    cin.get(c2);
    cin >> n;

    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "n = " << n << endl;

    cout << "type 2 sentences with proper punctuation" << endl;
    cin.ignore(20, '.'); // \n checks for a new line waits for 20 characters OR a new line
    cin >> c3;
    cout << "c3 = " << c3 << endl;

    cin.ignore (100, '\n');
    cout << "\n";
    c3 = 'x';

    cout << "enter the string \'neat\' " << endl;

    ch_p = cin.peek();
    cin.ignore(1, '\n');
    cin.get(c1);
    cin.ignore(1, '\n');
    cin.putback(c3);
    cin.get(c2);
    cin.get(c4);


    cout << "ch_p = " << ch_p << endl;
    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "c4 = "<< c4 << endl;
    cout << "the new word is: " << ch_p << c1 << c2 << c4 << endl;


    cout << "what is your favorite food? " << endl;
    cin >> testStr;
    cout << "you entered: " << testStr << endl;

    cin.ignore(100, '\n');
    cout << "\n";

    cout << "what is your favorite beverage?" << endl;
    getline(cin, testStr2);
    cout << "you entered: " << testStr2 << endl;


}