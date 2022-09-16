#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double v0, theta, x1, h1, h2, N, t, v0x, yt, cos_theta, sin_theta, xc, xs;
    const double g = 9.81;
    cin >> N;
    while (N > 0) {
        cin >> v0 >> theta >> x1 >> h1 >> h2;
        xc = theta*3.14159/180;
        cos_theta = cos(x);
        cout << "result: " << cos_theta << endl;
        v0x = (v0 * (cos_theta));
        cout << "v0x: " << v0x << endl;
        t = x1 / v0x;
        cout << "t: " << t << endl;
        xs = theta*3.14159/180;
        sin_theta = cos(x);
        yt = ((v0 * t * sin(theta)) - (0.5 * (g * pow(t, 2))));
        cout << "yt: " << yt << " h1: " << h1 << " h2: " << h2 << endl;
        if ((yt >= (h1 + 1)) && (yt <= (h2 - 2))) {
            cout << "Safe" << endl;
        } else {
            cout << "Not Safe" << endl;
        }
        N--;

    }

}