#include <iostream>

using namespace std;
int main() {
    int N, array_place = 0;
    cout << "enter number of variables: ";
    cin >> N;
    int listA[N];
    while (array_place < N) {
        cin >> listA[array_place];
        array_place++;
    }
    int listB[N];
    for (int index = 0; index < N; index++) {
        listB[index] = listA[index];
    }
    cout << "ListA: ";
    for (int i = 0; i < N; i++) {
        cout << listA[i] << " ";
    }
    cout << "ListB: ";
    for (int i = 0; i < N; i++) {
        cout << listB[i] << " ";
    }





}