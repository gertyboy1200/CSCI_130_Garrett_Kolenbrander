#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    /* this would be much easier to solve with the use of bools and arrays but i am not 100% firmilar with the syntax in c++ yet but i am looking into it*/
    
    
    int a, modulo, total, count = 0, i = 9;
    int l = 18;
    int total_sub_input = 0;

    bool mod[42];
    int N = 42;
    while ( N > 0) {
        mod[N] = false;
        cout << mod[N] << " ";
        N--;
    }
    cout << endl;
    while (l > 0){
        cin >> modulo;
        mod[modulo%42] = true;
        cout << l << " ";
        l--;
    }
    cout << "test2";
    N = 42;
    while ( N > 0) {
        if (mod[N]) {
            count++;
        }
        
        N--;
    }
    

    cout << "total unique outputs" << count - 1;

}