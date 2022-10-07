#include <iostream>

using namespace std;

int day_of_least_junk(int N);

int main() {

    int N;
    cin>>N;
    cout << day_of_least_junk(N) << endl;
}

int day_of_least_junk(int N) {
    int day, loop_var, lowest_value;
    int array_place = 0;
    int space_junk[N];
    while (array_place < N) {
        cin >> space_junk[array_place];
        array_place++;
    }
    lowest_value = space_junk[0];
    array_place = 0;
    while (array_place < N) {
        if(lowest_value > space_junk[array_place]){
            lowest_value =space_junk[array_place];
            day = array_place;
        } 
        array_place++;
    }
    if (space_junk[0] == lowest_value) {
        day = 0;
    }
    return day;
}