#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    double v0, theta, x1, h1, h2, N, t, v0x, yt, cos_theta, sin_theta, xc, xs;
    const double g = 9.81;
    
    cin >> N;
    
    while (N > 0) {
        
        cin >> v0 >> theta >> x1 >> h1 >> h2;
        
        xc = theta*3.14159/180;
        cos_theta = cos(xc); // converting from radians to degrees
        
        v0x = (v0 * (cos_theta));
        t = x1 / v0x; // solving for time using the x component of the vector triangle
        
        sin_theta = sin(xc); // converting from radians to degrees
        
        yt = ((v0 * t * sin_theta) - (0.5 * (g * pow(t, 2)))); // using the given function to solve for y(t) 
        cout << yt;

        // if statement is checking to see wheather y(t) will fit through the hole in the wall

        if ((yt >= (h1 + 1)) && (yt <= (h2 - 1))) {
            cout << "Safe" << endl;
        } else {
            cout << "Not Safe" << endl;
        }
        N--;
    }

}