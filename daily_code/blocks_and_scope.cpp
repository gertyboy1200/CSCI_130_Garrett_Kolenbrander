#include <iostream>
using namespace std;

int main () {
    {
        int a, b;
        a = 25;
        b = 17;
        cout << "the value of a is: " << a << " the value of b is: " << b << endl;
        {
            double a = 46.235;
            int c = 10;
            cout << "a is now = " << a;
            cout << "b is now = " << b;
            cout << "c is now = " << c << endl;
        }
        cout << "the value of a is: " << a << " the value of b is: " << b << endl;
    }
    return 0;
}