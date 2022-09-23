#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double C, L, w, l, A, cost_lawn, total_cost;

    cin >> C;
    cin >> L;

    while (L > 0) {
        cin >> l >> w;
        A = l * w;
        cost_lawn = C * A;
        total_cost = total_cost + cost_lawn;

        L--;
    }
    cout << setprecision(6) << fixed << total_cost << endl;
}
