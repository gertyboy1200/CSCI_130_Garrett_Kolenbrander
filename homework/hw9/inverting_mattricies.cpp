#include <iostream>
#include <iomanip>
using namespace std;

void adjoining_the_mattrix(double matt[][2]){
    double temp;

    temp = matt[0][0];
    matt[0][0] = matt[1][1];
    matt[1][1] = temp;
    matt[0][1] = -matt[0][1];
    matt[1][0] = -matt[1][0];
}

void print_matrix (double matt[][2]) {
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout  << fixed << setprecision(4) << setw(15) << matt[i][j];
        }
        cout << "\n";
    }
}

void inverse_of_matt(double matt[][2], double determinant){
    matt[0][0] = matt[0][0] / determinant;
    matt[1][1] = matt[1][1] / determinant;
    matt[0][1] = matt[0][1] / determinant;
    matt[1][0] = matt[1][0] / determinant;
}

int main() {
    double matt[2][2];

    cout << "enter a mattrix you would like to take the inverse of. enter the matrix like this example: " << endl;
    cout << "x  x" << endl;
    cout << "x  x" << endl;

    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 2; c++) {
            cin >> matt[r][c];
        }
    }

    cout << "the mattrix you entered was :" << endl;
    print_matrix(matt);

    double determinant = (matt[0][0] * matt[1][1]) - (matt[0][1] * matt[1][0]);
    cout << "the determinant is " << determinant << endl;
    if ((matt[0][0] * matt[1][1]) - (matt[0][1] * matt[1][0]) == 0){
        cout << " the determinant is undefined as it is 1 / 0. exiting....";
        return 0;
    }
    
    cout << "the adjoint of the mattirx is: " << endl;
    adjoining_the_mattrix(matt);
    print_matrix(matt);

    cout << "the inverse of the mattrix is; " << endl;
    inverse_of_matt(matt, determinant);
    print_matrix(matt);

    return 0;
}