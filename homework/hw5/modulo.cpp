#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, a, modulo, total, count = 0, f5, f6;
    int b = 42;
    int total_sub_input = 0;

    cin >> N;

    while (N > 0){
        cin >> a;
        modulo = a % b;

        cout << modulo << endl;
        if (total_sub_input != modulo) {
            
            count++;
        }else {
            continue;
        }

        N--;
    }
    

}