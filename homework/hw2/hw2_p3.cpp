#include <math.h>
#include <iostream>
using namespace std;
int main() {
    double rider_force, crank_arm_length, stress, r, numerator, denominator;
    const double pi = 3.14159265358979;
    cout << "input the rider force in lbs: ";
    cin >> rider_force;
    cout << "input the crank arm length in mm: ";
    cin >> crank_arm_length;
    cout << "input stress in psi: ";
    cin >> stress;

    crank_arm_length = crank_arm_length / 25.4;

    r = cbrt((crank_arm_length*rider_force)/(pi*stress));
    cout << "radius in inches = " << r;
    
    return 0;

}