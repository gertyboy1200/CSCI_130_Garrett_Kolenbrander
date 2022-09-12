// programmer: Garrett Kolenbrander
// Date: 5 September, 2022
// Description: Practice with Manipulators

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int c0;
    double a, r, ct, m, t;

    c0 = 5;
    r = 0.2;
    m = 1.65;

    cout <<"for the model where m =" <<  m  << ", c(0) =" << c0 << ", and r =" << r << endl;
    cout << "input the time [in weeks] for the growth model: ";
    cin >> t;

    t = t*7;
    a = pow(c0, (1/m));
    ct = pow(((r/m) * t + a), m);

    cout << "c(" << t/7 << ") = " << ct << endl;

}