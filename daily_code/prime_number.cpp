#include <iostream>
using namespace std;

int main() {

    int n, prime, i;
    cout << "Enter a positive number you wish to see if its prime: ";
    cin >> n;
    if (n < 0) {
        cout << "not a valid number.... exiting....";
        return 0;
    }
    i = n;
    while (i > 2) {
        prime = n % (i - 1);
        if (prime == 0) {
            cout << n << " is not a prime number";
            return 0;
        }
        i--;
    }
    cout << n << " is a prime number";
}