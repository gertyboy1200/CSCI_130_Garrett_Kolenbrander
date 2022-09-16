#include <iostream>
using namespace std;

int main() {
    int a =5 , b = 2 , c = 4 , d = 6 , e = 3;

    if (a > b) {
        cout << "a is true!" << endl;
    } else {
        cout << "a is false" << endl;
    }

    if (a != b) {
        cout << "b is true" << endl;
    } else {
        cout << "b is false" << endl;
    }

    if (d % b == c % b) {
        cout << "c is true" << endl;
    } else {
        cout << " c is false" << endl;
    }

    if (a * c != d * b) {
        cout << "d is true" << endl;
    } else {
        cout << "d is false" << endl;
    }

    if (d * b == c * e) {
        cout << "e is true" << endl;
    } else {
        cout << "e is false" << endl;
    }

    if (!(a * b)) {
        cout << "f is true" << endl;
    } else {
        cout << "f is false" << endl;
    }

    if (!(a % b * c)) {
        cout << "g is true" << endl;
    } else {
        cout << "g is false" << endl;
    }

    if (!(c % b * a)) {
        cout << "h is true" << endl;
    } else {
        cout << "h is false" << endl;
    }

    if (b % c * a) {
        cout << "i is true" << endl;
    } else {
        cout << "i is false" << endl;
    }

}