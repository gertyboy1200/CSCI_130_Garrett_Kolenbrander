#include <iostream> 
using namespace std;
void display(); // function prototype
int firstnum = 10; // declare and initialize a global variable
int main() {
int firstnum = 20; // declare and initialize a local variable 
cout << "\nThe value of firstnum is " << firstnum << endl; 
display();
return 0;
}
void display(void) {
cout << "The value of firstnum is now " << firstnum << endl;
return; }
