#include <iostream>

using namespace std;

int main() {
    int var_1 = 21 ;
    int *p;
    p = &var_1;

    cout << "the adress of var 1 is: " << p << endl;
    cout << "the adress of var 1 is: " << &var_1 << endl;
    cout << "the adress of pointer p is: " << &p << endl;

    cout << "the value of the *p is " << *p << endl;

}