#include <iostream>
using namespace std;

int main() {
    int n ,dig ,p19;
    cin >> n >> dig >> p19;
    switch (n) {
        case 0:
            cout << "you won" << endl;
            break;
        case 1:
            cout << "its a tie" << endl;
            break;
        case 2:
            cout << "you lose" << endl;
            break;
    }
    
    switch (dig/4)
    {
    case 1:
        cout << "the flow is low" << endl;
        break;
    case 2:
    cout << "the flow is normal" << endl;
    break;
    case 3:
    cout << "the flow is high" << endl;
    break;
    }

    switch (p19 % 4)
    {
    case 1:
        cout << "the remainder of " << p19 << "/4 is " << p19 % 4 << endl;
        break;
    case 2:
        cout << "the remainder of " << p19 << "/4 is " << p19 % 4 << endl;
        break;
    case 3:
        cout << "the remainder of " << p19 << "/4 is " << p19 % 4 << endl;
        break;
    case 0:
        cout << "the remainder of " << p19 << "/4 is " << p19 % 4 << endl;
        break;
    }
}