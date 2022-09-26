#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double k1, k2 ,k3, ta, ws, WCI;

    k1 = 13.12;
    k2 = 11.37;
    k3 = 0.3965;
    // WCI = K1 + 0.6125 Ta - K2Ws0.16 + K3TaWs0.16
    cout << "temperature (degrees C)" << setfill(' ') << setw(25) << "wind speed (km/h)" << setfill(' ') << setw(15) << "final temp with wind chill (degrees C)" << endl;
    ta = 2;
    ws = 5;
    WCI = k1 +(0.6125 * ta) - (k2 *(pow(ws, 0.16))) + (k3 * ta * pow(ws, 0.16));
    
    cout << ta << "(degrees C)" << setfill(' ') << setw(25) << ws << "(km/h)" << setfill(' ') << setw(15) << WCI << "(degrees C)" << endl;

    ta = 2;
    ws = 7;
    
    WCI = k1 +(0.6125 * ta) - (k2 *(pow(ws, 0.16))) + (k3 * ta * pow(ws, 0.16));
    cout << ta << "(degrees C)" << setfill(' ') << setw(25) << ws << "(km/h)" << setfill(' ') << setw(15) << WCI << "(degrees C)" << endl;
    
    ta = 2;
    ws = 9;
    
    WCI = k1 +(0.6125 * ta) - (k2 *(pow(ws, 0.16))) + (k3 * ta * pow(ws, 0.16));
    cout << ta << "(degrees C)" << setfill(' ') << setw(25) << ws << "(km/h)" << setfill(' ') << setw(15) << WCI << "(degrees C)" << endl;

    ta = 2;
    ws = 11;
    
    WCI = k1 +(0.6125 * ta) - (k2 *(pow(ws, 0.16))) + (k3 * ta * pow(ws, 0.16));
    cout << ta << "(degrees C)" << setfill(' ') << setw(25) << ws << "(km/h)" << setfill(' ') << setw(15) << WCI << "(degrees C)" << endl;
    
    ta = 6;
    ws = 5;
    
    WCI = k1 +(0.6125 * ta) - (k2 *(pow(ws, 0.16))) + (k3 * ta * pow(ws, 0.16));
    cout << ta << "(degrees C)" << setfill(' ') << setw(25) << ws << "(km/h)" << setfill(' ') << setw(15) << WCI << "(degrees C)" << endl;
    
    ta = 6;
    ws = 7;
    
    WCI = k1 +(0.6125 * ta) - (k2 *(pow(ws, 0.16))) + (k3 * ta * pow(ws, 0.16));
    cout << ta << "(degrees C)" << setfill(' ') << setw(25) << ws << "(km/h)" << setfill(' ') << setw(15) << WCI << "(degrees C)" << endl;

    ta = 6;
    ws = 9;
    
    WCI = k1 +(0.6125 * ta) - (k2 *(pow(ws, 0.16))) + (k3 * ta * pow(ws, 0.16));
    cout << ta << "(degrees C)" << setfill(' ') << setw(25) << ws << "(km/h)" << setfill(' ') << setw(15) << WCI << "(degrees C)" << endl;

    ta = 6;
    ws = 11;
    
    WCI = k1 +(0.6125 * ta) - (k2 *(pow(ws, 0.16))) + (k3 * ta * pow(ws, 0.16));
    cout << ta << "(degrees C)" << setfill(' ') << setw(25) << ws << "(km/h)" << setfill(' ') << setw(15) << WCI << "(degrees C)" << endl;

    ta = 10;
    ws = 5;

    WCI = k1 +(0.6125 * ta) - (k2 *(pow(ws, 0.16))) + (k3 * ta * pow(ws, 0.16));
    cout << ta << "(degrees C)" << setfill(' ') << setw(25) << ws << "(km/h)" << setfill(' ') << setw(15) << WCI << "(degrees C)" << endl;

    ta = 10;
    ws = 7;

    WCI = k1 +(0.6125 * ta) - (k2 *(pow(ws, 0.16))) + (k3 * ta * pow(ws, 0.16));
    cout << ta << "(degrees C)" << setfill(' ') << setw(25) << ws << "(km/h)" << setfill(' ') << setw(15) << WCI << "(degrees C)" << endl;

    ta = 10;
    ws = 9;

    WCI = k1 +(0.6125 * ta) - (k2 *(pow(ws, 0.16))) + (k3 * ta * pow(ws, 0.16));
    cout << ta << "(degrees C)" << setfill(' ') << setw(25) << ws << "(km/h)" << setfill(' ') << setw(15) << WCI << "(degrees C)" << endl;

    ta = 10;
    ws = 11;

    WCI = k1 +(0.6125 * ta) - (k2 *(pow(ws, 0.16))) + (k3 * ta * pow(ws, 0.16));
    cout << ta << "(degrees C)" << setfill(' ') << setw(25) << ws << "(km/h)" << setfill(' ') << setw(15) << WCI << "(degrees C)" << endl;
}