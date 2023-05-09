#include <iostream>
#include <string>
using namespace std;

double sumOfNumbers(double numberArray[]);

template <typename T> 
T productOfNumbers(T numberArray[]);

double averageOfNumbers(double numberArray[]);

double highestOfNumbers(double numberArray[]);

double lowestOfNumbers(double numberArray[]);

int floorOfNumbers(double numberArray[]);

void test();

int main(int argc, char* argv[]) {
    // Check if the "test" argument is passed
    if (argc > 1 && string(argv[1]) == "test") {
        // Call the test function here
        test();
    }
    char userInput = 'y';
    string userName;
    double numberArray[5];
    char userChoice;

    cout << "please enter your name:";
    cin >> userName;
    cout << "welcome " << userName << " pleased to meet you.";
    while (userInput == 'y' || userInput == 'Y'){
        cout << "Please enter 5 numbers:";
        for(int i = 0; i < 5; i++){
            cin >> numberArray[i];
        }

        cout << "Press 'S' to find the sum" << endl << "Press 'P' to find the product" << endl <<"Press 'A' to find the average" << endl << "Press 'H' to find the highest value" << endl << "Press 'L' to find the lowest value" << endl << "Press 'F' to find the floor" << endl;
        cout << "Your choice: ";
        cin >> userChoice;
        switch (userChoice){
            case 'S':
                cout << "The sum of your numbers is: " << sumOfNumbers(numberArray) << endl;
                break;

            case 'P':
                cout << "The product of your numbers is: " << productOfNumbers(numberArray) << endl;
                break;

            case 'A':
                cout << "The average of your numbers is: " << averageOfNumbers(numberArray) << endl;
                break;

            case 'H':
                cout << "The highest of your numbers is: " << highestOfNumbers(numberArray) << endl;
                break;

            case 'L':
                cout << "The lowest of your numbers is: " << lowestOfNumbers(numberArray) << endl;
                break;

            case 'F':
                if (floorOfNumbers(numberArray) == 0){
                    cout << "The floor of the sum of your numbers is 0" << endl;
                }else if(floorOfNumbers(numberArray) % 2 == 1 || floorOfNumbers(numberArray) % 2 == -1){
                    cout << "The floor of the sum of your numbers is odd" << endl;
                }else if(floorOfNumbers(numberArray) % 2 == 0){
                    cout << "The floor of the sum of your numbers is even" << endl;
                }
                break;

            default:
                cout << "Invalid choice. Please select S, P, A, H, L, or 'F'." << endl;
        }
        cout << "would you like to go again? Press Y/y to continue and anything else to quit: ";
        cin >> userInput;
    }

    return 0;
}

double sumOfNumbers(double numberArray[]){
    return numberArray[0] + numberArray[1] + numberArray[2] + numberArray[3] + numberArray[4];
}

template <typename T> 
T productOfNumbers(T numberArray[]){
    return numberArray[0] * numberArray[1] * numberArray[2] * numberArray[3] * numberArray[4];
}
double averageOfNumbers(double numberArray[]){
    return sumOfNumbers(numberArray) / 5;
}

double highestOfNumbers(double numberArray[]){
    double highestValue = numberArray[0];
        for (int i = 0; i < 5; i++){
            if (numberArray[i] > highestValue){
                highestValue = numberArray[i];
            }
        }
    return highestValue;
}

double lowestOfNumbers(double numberArray[]){
    double lowestValue = numberArray[0];
        for (int i = 0; i < 5; i++){
            if (numberArray[i] < lowestValue){
                lowestValue = numberArray[i];
            }
        }
    return lowestValue;
}

int floorOfNumbers(double numberArray[]){
    return sumOfNumbers(numberArray);
}
void test(){
    cout << "i ran a test" << endl;

    double numberArray1[] = {1, 2, 3, 4, 5};
    double numberArray2[] = {1, 2, -3, 4, 5};
    double numberArray3[] = {0, -1, 0, 0, 0};

    int sumresult1 = sumOfNumbers(numberArray1);
    assert(sumresult1 == 15);

    int sumresult2 = sumOfNumbers(numberArray2);
    assert(sumresult2 == 9);

    int sumresult3 = sumOfNumbers(numberArray3);
    assert(sumresult3 == -1);

    int proresult1 = productOfNumbers(numberArray1);
    assert(proresult1 == 120);

    int proresult2 = productOfNumbers(numberArray2);
    assert(proresult2 == -120);

    int proresult3 = productOfNumbers(numberArray3);
    assert(proresult3 == -0);

    int averesult1 = averageOfNumbers(numberArray1);
    assert(averesult1 == 3);

    int averesult2 = averageOfNumbers(numberArray2);
    assert(averesult2 == (9/5));

    int averesult3 = averageOfNumbers(numberArray3);
    assert(averesult3 == (-1/5));

    int highresult1 = highestOfNumbers(numberArray1);
    assert(highresult1 == 5);

    int highresult2 = highestOfNumbers(numberArray2);
    assert(highresult2 == 5);

    int highresult3 = highestOfNumbers(numberArray3);
    assert(highresult3 == 0);

    int lowresult1 = lowestOfNumbers(numberArray1);
    assert(lowresult1 == 1);

    int lowresult2 = lowestOfNumbers(numberArray2);
    assert(lowresult2 == -3);

    int lowresult3 = lowestOfNumbers(numberArray3);
    assert(lowresult3 == -1);

    int floresult1 = floorOfNumbers(numberArray1);
    assert(floresult1 == 15);

    int floresult2 = floorOfNumbers(numberArray2);
    assert(floresult2 == 9);

    int floresult3 = floorOfNumbers(numberArray3);
    assert(floresult3 == -1);
}