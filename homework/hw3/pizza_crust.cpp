#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double C, inside_r, R, total_area, inside_area, crust_percent;
    cin >> R >> C;
    if ( R == C ) {
        crust_percent = 0;
        cout << crust_percent;  
        return 0;
    }
    crust_percent = ((C * C)/(R * R)) * 100;
    cout << setprecision(7)<< crust_percent;
    return 0;
   
}
