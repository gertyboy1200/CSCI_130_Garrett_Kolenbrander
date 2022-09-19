#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int Ln, N, last_dig;
    int fact = 1, i;
    
    cin >> Ln >> N;
    
    while (Ln > 0) {
        
        for(i=1; i<=N; i++)
        fact = fact * i;
        
        fact = fact % 10;
        cout << fact << endl;
        cin >> N;
        Ln--;
        fact = 1;
   }

}