// programmer: Garrett Kolenbrander
// Date: 5 September, 2022
// Description: Practice with Manipulators
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
    cout << setprecision(2) << fixed;
    cout << "the value of the slope is: "<< setw(6) << setfill('0') << slope << endl;
}