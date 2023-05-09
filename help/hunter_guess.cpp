#include <iostream>
#include <string>

using namespace std;


int randNum(){
    return rand() % 20 + 1;;
}

int readNumber() {
    int userInput;
    cout << "Take a guess: ";
    while(cin >> userInput){
        if(userInput > 20 || userInput < 1){
            cout << "your number is not between 1 and 20 please try again: ";
        } else if (userInput <= 20 || userInput >= 1){
            break;
        }
    }
    return userInput;
}

int checkGuess(int userInout, int computerInput){
    if(userInout == computerInput){
        return 0;
    } else if(userInout < computerInput){
        return -1;
    } else{
        return 2;
    }
}

void game(){
    string name;
    int guess;
    char playAgain = 'y';

    cout << "welcome to guess the nummber game!!" << endl << "What is your name?" << endl;
    
    cin >> name;
    while(playAgain == 'y' || playAgain == 'Y'){
    int computerInput = randNum();
    cout << "Hello, " << name << ". I am thinking of a number between 1 and 20." << endl;
    cout << "You get 6 tries to guess the number." << endl;
    
        for(int i = 1; i <= 6; i++){
            guess = readNumber();
            
            if(checkGuess(guess, computerInput) == 0){
                cout << "You guessed the number in " << i + 1 << " tries! Would you like to play again enter Y/y. enter anything else to quit: ";
                cin >> playAgain;
                break;
            } else if (i > 5){
                cout << "You failed to guess my number. The secret number was " << computerInput << ". Would you like to play again enter Y/y. enter anything else to quit: ";
                cin >> playAgain;
                break;
            }else if (checkGuess(guess, computerInput) == -1){
                cout << "Your guess is too low. Try again!" << endl << "Your new guess: ";
            } else if (checkGuess(guess, computerInput) == 2){
                cout << "Your guess was too high. Try again!" << endl << "Your new guess: ";
            }
        }
    }
}

int main() {
    game();
return 0;
}
