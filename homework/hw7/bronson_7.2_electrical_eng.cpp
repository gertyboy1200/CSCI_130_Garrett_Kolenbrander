#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int resistance[5] = {16, 27, 39, 56, 81};
    int current[5];
    int power[5];
    int res_total = 0, cur_total = 0, pow_total = 0;
    cout << "enter the 5 current values in a x x x x x order: ";
    for (int i = 0; i < 5; i ++){
        cin >> current[i];
    }
    for (int j = 0; j < 5; j++)
    power[j] = resistance[j] * pow(current[j],2);

    cout << "resistance" << setw(20) << setfill(' ') << "current" << setw(20) << setfill(' ') << "power" << endl;
    
    for (int x = 0; x < 5; x++)
    cout << resistance[x] << setw(25) << setfill(' ') << current[x] << setw(25) << setfill(' ') << power[x] << endl;
    
    for (int i = 0; i < 5; i ++)
    res_total = resistance[i] + res_total;

    for (int i = 0; i < 5; i ++)
    cur_total = current[i] + cur_total;

    for (int i = 0; i < 5; i ++)
    pow_total = power[i] + pow_total;

    cout << "total: " << res_total << setw(20) << setfill(' ') << cur_total << setw(20) << setfill(' ') << pow_total << endl;

}