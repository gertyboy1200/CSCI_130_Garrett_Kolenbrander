#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    double x1, x2, y1, y2;
    double slope;
    // input the coordinates and return them 
    cout << " input your coordinates [ x1 y1] [x2 y2]: "; 
    cin >> x1 >> y1 >> x2 >> y2;
    cout << "your points entered: (" << x1 << " , " << y1 << ") , (" << x2 << " , " << y2 << ")" << endl;

    if (x1 == x2) {
        cout << "THE SLOPE IS VERTICAL";
        return 0;
    }

    // finding the slope
    slope = ((y2 - y1) / (x2 - x1));
    cout << setprecision(8) << "the value of the slope is: "<< slope << endl;


}