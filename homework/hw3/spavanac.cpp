#include <iostream>

using namespace std;

int main () {
    
    int H, M;
    cin >> H >> M;
    
    if (M < 45 && H > 0) {
        M = M - 45;
        M = M + 60;
        H--;
        cout << H << " " << M;

    } else if (M >= 45) {
        M = M - 45;
        cout << H << " " << M;

    } else if (M < 45 && H == 0) {
        M = M - 45;
        M = M + 60;
        H = 23;
        cout << H << " " << M;

    }
    return 0;

}