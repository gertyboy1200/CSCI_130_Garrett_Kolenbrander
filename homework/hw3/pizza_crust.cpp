#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double C, inside_r, R, total_area, inside_area, crust_percent;
    cin >> R >> C;
    if ( R == C ) {
        crust_percent = 0;
        cout << crust_percent;  
        return 0;
    }
    if (C > R) {
    crust_percent = 0;
    cout << crust_percent;  
    return 0;

    }
    inside_r = R - C;
    total_area = (R * R);
    inside_area = (C * C);
    crust_percent = (inside_area/total_area) * 100;
    cout << crust_percent;
    return 0;
   
}