#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double v0, theta, x1, h1, h2, N, t, v0x, yt, cos_theta, sin_theta, xc, xs, part_1, part_2;
    const double g = 9.81;
    cin >> N;
    while (N > 0) {
        cin >> v0 >> theta >> x1 >> h1 >> h2;
        xc = theta*3.14159/180;
        cos_theta = cos(xc);
        v0x = (v0 * (cos_theta));
        t = x1 / v0x;
        xs = theta*3.14159/180;
        sin_theta = sin(xs);
        part_1 = v0 * t * sin_theta;
        part_2 = 0.5 * g  * pow(t, 2);
        cout << "part 1: " << part_1 << " part 2: " << part_2 << endl;
        yt = ((v0 * t * sin_theta) - (0.5 * (g * pow(t, 2))));
        cout << "t: " << t << endl;
        cout << "yt: " << yt << "h1: " << h1 << "h2: " << h2 << endl;
        if ((yt >= (h1 + 1)) && (yt <= (h2 - 1))) {
            cout << "Safe" << endl;
        } else {
            cout << "Not Safe" << endl;
        }
        N--;

    }

}