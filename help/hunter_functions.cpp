#include <iostream>
#include <cmath>

using namespace std;

template <typename T>
T add(T num1, T num2) {
    return num1 + num2;
}

template <typename T>
T sub(T num1, T num2) {
    return num1 - num2;
}

template <typename T>
T multiply(T num1, T num2) {
    return num1 * num2;
}

template <typename T>
T divide(T num1, T num2) {
    return num1 / num2;
}                


int mod(int num1, int num2) {
    return num1 % num2;
}

template <typename T>
T power(T num1, T num2) {
    return pow(num1, num2);
}

template <typename T>
T squareRoot(T num1, T num2) {
    return sqrt(num1);
}

template <typename T>
T tests(T num1, T num2, T testNumber) {
    cout << "The sum of test number " << testNumber << " is: " << add(num1, num2) << endl;
    cout << "The difference of test number " << testNumber << " is: " << sub(num1, num2) << endl;
    cout << "The product of test number " << testNumber << " is: " << multiply(num1, num2) << endl;
    cout << "The divsion of test number " << testNumber << " is: " << divide(num1, num2) << endl;
    cout << "The remainder of test number " << testNumber << " is: " << mod(num1, num2) << endl;
    cout << "The power of the first number to the second of test number " << testNumber << " is: " << power(num1, num2) << endl;
    cout << "The square root of the first number of test number " << testNumber << " is: " << squareRoot(num1, num2) << endl;
}

int main() {
    double num1, num2;
    int testNumber = 1;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    
    cout << "The sum is: " << add(num1, num2) << endl;
    cout << "The difference is: " << sub(num1, num2) << endl;
    cout << "The product is: " << multiply(num1, num2) << endl;
    cout << "The divsion is: " << divide(num1, num2) << endl;
    cout << "The remainder is: " << mod(num1, num2) << endl;
    cout << "The power of the first number to the second is: " << power(num1, num2) << endl;
    cout << "The square root of the first number is is: " << squareRoot(num1, num2) << endl;
    

    tests(9, 13, testNumber);
    testNumber++;
    tests(47, 10, testNumber);
    
    return 0;
}


