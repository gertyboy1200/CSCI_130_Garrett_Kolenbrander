// programmer: Garrett Kolenbrander
// Date: 5 September, 2022
// Description: Practice with Manipulators

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int c0;
    double a, r, ct, m, t;

    c0 = 10;
    r = 0.2;
    m = 1.65;

    cout <<"for the model where m =" <<  m  << ", c(0) =" << c0 << ", and r =" << r << endl;
    cout << "input the time [in weeks] for the growth model: ";
    cin >> t;

    t = t*7;
    a = pow(c0, (1/m));
    ct = pow(((r/m) * t + a), m);
   
    //cout << setprecision(1) << fixed;
    //cout << setprecision(0) << fixed;
    //cout << "c(" << t/7.0 << ") = " << scientific << setprecision(2) << ct << endl;
    
    cout << setprecision(0) << fixed;
    cout << setw(10) << "your number is being evaluated..." << "\n";
    cout << setw(10) << "c(" << t/7.0 << ") = " << ct << endl;

    cout << "we reccomend trying the following points: \n";
    cout << setw(5) << setfill('*') << 10 << setw(7) << setfill('*') << 20 << setw(7) << setfill('#') << 50 << endl;

}