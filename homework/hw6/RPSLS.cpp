/******************************************************************************
Description: Rock, Paper, Scissors, Lizard, Spock Game
             This game is unfinished. Follow along with CSCI130_RockPaperScissors2.pdf
             to complete the game.
Last Modified by: Dr. M
Last Modified on: 9/2020
*******************************************************************************/
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void TranslatePick(int flag_who, char selection);
char ComputerSelectRPSLK();
void declare_winner();
string GiveFeedback();

int main()
{
    // declare vars
    char userPick;                  // user's selection for game
    bool valid_pick = false;        // flag controlled while loop for obtaining user input
    char computerPick;              // randomly selected computer selection for game
    
    
    // Display rules of the game.
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "It's time to play Rock, Paper, Scissors, Lizard, Spock!" << endl;
    cout << "Use R (for Rock), P (for Paper), S (for Scissors), ";
    cout << "L (for Lizard), and K (for Spock)." << endl;
    
   declare_winner();
    
    return 0;
}

void declare_winner() {
    char userPick;
    bool valid_pick = false;
    char computerPick;
    int count = 0;

    for (int i = 0; i < 3; i++) {
        valid_pick = false;
        while (valid_pick == false)
        {
            cout << "\n";
            cout << "You pick: ";
            cin >> userPick;
            
            if ( (userPick == 'R') || (userPick == 'P') || (userPick == 'S' ) ||
                (userPick == 'L') || (userPick == 'K') )
            {
                valid_pick = true;
            }
            else
                cout << "Invalid Selection. Try again. " << endl;
        }
        
        // Repeat selection back to user.
        TranslatePick(0, userPick);
        
        // Obtain computer selection.
        computerPick = ComputerSelectRPSLK();
        TranslatePick(1, computerPick);
        
        if ((userPick == 'R') && ((computerPick == 'K' || computerPick == 'P'))) {
            cout << "you loose";
        } else if ((userPick == 'R') && ((computerPick == 'S' || computerPick == 'L'))){
            cout << "you win" << endl;
            cout << GiveFeedback();
            count++;
        } else if ((userPick == 'S') && ((computerPick == 'K' || computerPick == 'R'))){
            cout << "you loose";
        } else if ((userPick == 'S') && ((computerPick == 'L' || computerPick == 'P'))){
            cout << "you win" << endl;
            cout << GiveFeedback();
            count++;
        } else if ((userPick == 'L') && ((computerPick == 'R' || computerPick == 'S'))){
            cout << "you loose";
        } else if ((userPick == 'L') && ((computerPick == 'P' || computerPick == 'K'))){
            cout << "you win" << endl;
            cout << GiveFeedback();
            count++;
        } else if ((userPick == 'P') && ((computerPick == 'S' || computerPick == 'L'))){
            cout << "you loose";
        } else if ((userPick == 'P') && ((computerPick == 'K' || computerPick == 'R'))){
            cout << "you win" << endl;
            cout << GiveFeedback();
            count++;
        } else if ((userPick == 'K') && ((computerPick == 'L' || computerPick == 'P'))){
            cout << "you loose";
        } else if ((userPick == 'K') && ((computerPick == 'R' || computerPick == 'S'))){
            cout << "you win" << endl;
            cout << GiveFeedback();
            count++;
        } else{
            cout << "its a tie";
        }
        if (count >= 2) {
            cout << "\n" << "you won the best of three!!";
            break;
        }
    }
    cout << "\nyou won " << count << " times!" << endl;
}

void TranslatePick(int flag_who, char selection)
{
    // declare local function variables
    string who_text;
    
    // identify which statements to insert into the output below
    if (flag_who == 0)
        who_text = "You";
    else
        who_text = "The Computer";
    
    // display output where the char selection is translated into words
    if (selection == 'R')
        cout << who_text <<" selected Rock." << endl;
    else if (selection == 'P')
        cout << who_text <<" selected Paper." << endl;
    else if (selection == 'S')
        cout << who_text <<" selected Scissors." << endl;
    else if (selection == 'L')
        cout << who_text <<" selected Lizard." << endl;
    else if (selection == 'K')
        cout << who_text <<" selected Spock." << endl;
    else // something is wrong
        cout << "Check code for errors. Message from TranslatePick fcn." << endl;
        
    return;
        
}

/* Descprition: This function is used to make a random character selection in the 
        game Rock, Paper, Scissors, Lizard, Spock
   Parameters:  there are no inputs */
char ComputerSelectRPSLK()
{
    // declare local function variables
    char randPickChar;
    int randPick;
    
    // pick a random number from 0 to 4
    srand (time(NULL)); // initialize random seed.
    randPick = rand() % 5; // gives us 0 to 4
    //cout << randPick; // uncomment to debug

    // assign random number to letter
    switch (randPick)
    {
        case 0: 
            randPickChar = 'R';
            break;
        case 1: 
            randPickChar = 'P';
            break;
        case 2: 
            randPickChar = 'S';
            break;
        case 3: 
            randPickChar = 'L';
            break;
        case 4: 
            randPickChar = 'K';
            break;
        default:
            cout << "Error in the function ComputerSelectRPSLK. " << endl;
    }
    
    return randPickChar;
}

string GiveFeedback()
{
    string rand_celebration;
    int randPick;
    
    srand (time(NULL)); 
    randPick = rand() % 5; 

    switch (randPick)
    {
        case 0: 
            rand_celebration = "Wow you are amazing!";
            break;
        case 1: 
            rand_celebration = "Holy cow you are incredible!";
            break;
        case 2: 
            rand_celebration = "You are a champion!";
            break;
        case 3: 
            rand_celebration = "Unbelievable job!";
            break;
        case 4: 
            rand_celebration = "That was awesome!";
            break;
        default:
            cout << "Error in the function GiveFeedback. " << endl;
    }
    
    return rand_celebration;
}







