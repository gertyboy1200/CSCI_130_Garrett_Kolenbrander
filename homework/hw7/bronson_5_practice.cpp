#include <iostream>

using namespace std;


void time(int seconds);

    int main() {
    int sec, mins, hrs, seconds;

    cout << "Enter time in seconds:";
    cin >> seconds;

    time(seconds);

}


void time(int seconds){
    int sec, mins, hrs;
    int rem1;
    hrs = seconds/3600;
    rem1 = seconds%3600;
    mins = rem1/60;
    sec = rem1%60;
  
    cout << " The time is " << hrs << " hours " << mins << " minutes and " << sec << " seconds";
    }