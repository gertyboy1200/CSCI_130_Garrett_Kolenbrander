// programmer: Garrett Kolenbrander
// Date: 5 September, 2022
// Description: Practice with Manipulators

/*
How do you know the result your program produced is correct? i did the calculations by hand
d. What do you think will happen if you use the points (2,3) and (2,4), 
which results in a divi- sion by zero? How do you think this situation can be handled?
There will be an error, a simple solution would be to add an if statement to check if the 2 x values are identical.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x1, x2, y1, y2;
    double slope;
    cout << " input your coordinates [ x1 y1] [x2 y2]: "; 
    cin >> x1 >> y1 >> x2 >> y2;
    cout << "your points entered: (" << x1 << " , " << y1 << ") , (" << x2 << " , " << y2 << ")" << endl;
    if (x1 == x2) {
        cout << "THE SLOPE IS VERTICAL";
        return 0;
    }
    // finding the slope
    slope = ((y2 - y1) / (x2 - x1));
    if (slope < 0) {
        cout << setprecision(2) << fixed;
        cout << "the value of the slope is:" << slope << endl;
        return 0;
    }
    cout << setprecision(2) << fixed;
    cout << "the value of the slope is: "<< setw(6) << setfill('0') << slope << endl;
}