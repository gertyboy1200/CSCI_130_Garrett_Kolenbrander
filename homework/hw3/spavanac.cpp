#include <iostream>

using namespace std;

int main () {
    
    int H, M;
    cin >> H >> M;
    
    if (M <= 45) {
        M = M - 45;
        M = M + 60;
        cout << M;

    }
}