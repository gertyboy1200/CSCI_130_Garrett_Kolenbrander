#include <iostream>

using namespace std;

int main() {

    int N, day, loop_var, lowest_value;
    int array_place = 0;
    cin>>N;
    int space_junk[N];
    while (array_place < N) {
        cin >> space_junk[array_place];
        array_place++;
    }
    lowest_value = space_junk[0];
    array_place = 0;
    while (array_place < N) {
        cout << "array place: " << array_place << endl;
        if(lowest_value > space_junk[array_place]){
            lowest_value =space_junk[array_place];
            day = array_place;
        } 
        array_place++;
        cout << "lowest value: " << lowest_value << endl;
    }
    if (space_junk[0] == lowest_value) {
        day = 0;
    }
    cout << day << endl;
}