#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int Ln, N, last_dig;
    int fact = 1, i;
    cin >> Ln;
    while (Ln > 0) {
        cin >> N;
        for(i=1; i<=N; i++)
        fact = fact * i;
        fact = fact % 10;
        cout << fact << endl;
        Ln--;
        fact = 1;
   }

}