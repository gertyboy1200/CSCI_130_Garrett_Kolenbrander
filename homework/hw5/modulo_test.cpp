#include <iostream>
using namespace std;

int main() {
    int idx;
    int myArray[6];
    int counter=0;
    while(counter<6){
        cout<<"enter six numbers: ";
        cin>>myArray[counter];
        cout<<myArray[counter];
         cout<<endl;
        counter=(counter+1);
    }
    for (idx = 0; idx < counter; ++idx) {
        if (myArray[idx] == myArray[counter]) break;
    }
    if (idx == counter) {
        cout << "unique\n";
    } else {
        cout << "not unique\n";
    }

}