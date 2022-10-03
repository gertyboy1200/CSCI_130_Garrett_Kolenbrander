#include <iostream>
using namespace std;

double power_gen();
int main() {

    cout << " the watts generated is: "<< power_gen();

}

double power_gen() {

    double power, flow, distance;
    //P =ρ × Q × H × g
    cout << "enter the flow rate in m^3/2: ";
    cin >> flow;
    cout << "enter the head distance in m: ";
    cin >> distance;
    const double density = 997;
    const double g = 9.81;
    power = flow * g * density * distance;
    return power;
}