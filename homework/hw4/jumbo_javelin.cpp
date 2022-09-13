#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int T, N_1, total;
    total = 0;
    cin >> T >> N_1;

    while (T > 1) {
        total = total + N_1 -1;
        cin >> N_1;
        T--;
    }

    total = total + N_1;
    cout << "final total: " << total;
}