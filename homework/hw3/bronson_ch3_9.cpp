#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main () {
    double E, R, RC, t, i, e_pow;
    double e;
    e = 2.71828;
    E = 20;
    R = 10;
    RC = 0.044;
    t =0.023;
    e_pow = pow(e,(-t/RC));
    i = ((E/R)*e_pow);
    cout << i;
}