#include <iostream>

using namespace std;
void mystaticsum();
int main() {

    for (int i = 1; i <= 10; i++) {
        mystaticsum();
    }

    return 0;
}

void mystaticsum() {

    static int x = 0;
    int y = 100;
    x = x + 2;
    y = y + 1;

    cout << "mystaticsum is: x = " << x << " and y = " << y << endl;
}