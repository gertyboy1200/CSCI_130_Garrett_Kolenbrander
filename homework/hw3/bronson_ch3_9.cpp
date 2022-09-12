// programmer: Garrett Kolenbrander
// Date: 5 September, 2022
// Description: Practice with Manipulators

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main () {
    double E, R, RC, t, i, e_pow;
    double e;
    e = 2.71828;
    E = 35;
    R = 10;
    RC = 0.16;
    t =0.067;
    e_pow = pow(e,(-t/RC));
    i = ((E/R)*e_pow);
    cout << i;
}