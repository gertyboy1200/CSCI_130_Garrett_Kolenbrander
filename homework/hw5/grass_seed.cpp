#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double C, L, w, l, A, cost;

    cin >> C;
    cin >> L;

    while (L > 0) {
        cin >> l >> w;
        A = l * w;
        cost = C * A;
        cout << setprecision(6) << fixed << cost << endl;

        L--;

    }
}
