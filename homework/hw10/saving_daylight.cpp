
#include <iostream>
using namespace std;

int main () {
    int time, minutes;

    /*cin >> time;
    cin.ignore(); 
    cin >> minutes;
    cout << time << minutes;
    cout << 2 /3;*/


    while (temp != '\0') {
        count++;
        i++;
        temp = string[i];
    }


  /*string line;
  while (!line.empty()){
    cin >> time;
    cout << line << "\n";}
*/

bool empty_line_found = false;
    string month;
    int day, year, sunrise_hours, sunrise_minutes, sunset_hours, sunset_minutes;

while(getline(cin, month) && !month.empty())
{
    cout << month << "\n";

  if( sunset_minutes > 0 )
  {
  }
  else
  {
    empty_line_found = true;
    // otherwise, we have a line with data in it.
    //  process the data here
    //  (ie:  do whatever you're supposed to be doing with these lines as you read them)
  }
}

    return 0;
}