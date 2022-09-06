#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double c, total_r, inside_r, total_area, inside_area, crust_percent, crust_area;
    cout << "input width of the crust (c) the the total radius (R):";
    cin >> c >> total_r;
    inside_r = total_r - c;
    total_area = M_PI*(total_r * total_r);
    inside_area = M_PI*(inside_r * inside_r);
    crust_area = total_area - inside_area;
    crust_percent = (crust_area/total_area) * 100;

    cout << "crust percent is: " << crust_percent <<"%";

    return 0;

    
    
    
}