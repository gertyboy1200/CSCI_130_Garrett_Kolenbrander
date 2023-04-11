#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int C, count = 0;
    int array[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,};
    for (int i = 0; i < 10; i++){
        cin >> C;
        array[i] = (C % 42);
    }
    for (int j = 0; j < 10; j++) {
        int k = 0;
        for (k = 0; k < 10; k++)
            if (array[j] == array[k])
                break;
 
        // If not printed earlier, then print it
        if (j == k)
            count++;
    }

    cout << count << endl;
    return 0;
}