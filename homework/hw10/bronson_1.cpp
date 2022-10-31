#include <iostream> 
using namespace std;

int main() {

    const int NUMS = 5;
    int nums[NUMS] = {16, 54, 7, 43, -5}; 
    int total = 0;


    for (int i = 0; i < NUMS; i++) {
        total += nums[i];
    }
    cout << "The total of the array elements is " << total << endl;
    return 0; 
    }