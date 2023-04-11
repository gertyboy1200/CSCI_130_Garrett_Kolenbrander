#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double functionToSolve(double x){
    return 1 / x;
}

bool compare_float(double x, double y, double epsilon){
   if(fabs(x - y) < epsilon)
      return true; //they are same
      return false; //they are not same
}

void sixTrapazoids(){
    double x = 1, sum = 0, deltax = 0.5, endingLocation = 4;

    while(x < endingLocation){
        sum = sum + (0.25 * ((1 / x) + (1 / (x + deltax))));
        x = x+0.5;
    }

    cout << "total sum for 6 trapazoids is = " << fixed << setprecision(20) << sum << endl;
}

void findMinN(){
    double x, sum = 0, deltax, startingLocation = 1, endingLocation = 4, previousSum = 0, precision = 0.01;
    int i = 1;

    cout << "enter the precision you wish to achive, the deafault is 0.01: ";
    cin >> precision;

    for (i = 1; i > 0; i++){
        deltax = (endingLocation - startingLocation) / i;
        sum = 0;
        x = startingLocation;
        while(x < endingLocation){
            sum = sum + ((deltax * 0.5) * ((functionToSolve(x)) + (functionToSolve((x + deltax)))));
            x = x+deltax;
        }
        
        if(compare_float(sum, previousSum, precision)){
            break;
        } else {
            previousSum = sum;
        }    
    }
    
    cout << "the sum of the trapazoids to get the precision you entered is = " << fixed << setprecision(20) << sum << endl << "and the minimun number of trapazoids to acheive this is: " << i << endl;
}

int main(){
    sixTrapazoids();
    findMinN();

    return 0;
}



