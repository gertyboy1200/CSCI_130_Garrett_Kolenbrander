#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double b, N, min_case, normal, max_case, t;
    cin >> N;
    while (N > 0) {
        cin >> b >> t;
        min_case = (60.0 * (b - 1)) / t;
        normal = (60.0 * b) / t;
        max_case = (60.0 * (b + 1)) / t;
        cout << setprecision(4) << fixed << min_case << " " << normal << " " << max_case << endl;
        N--;
   }
return 0;
}