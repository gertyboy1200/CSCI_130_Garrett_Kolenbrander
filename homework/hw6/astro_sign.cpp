#include <iostream>

using namespace std;
int month_conversion();
string astro_sign();
int main(){

    int day, t;
    string month;

    cin >> t;

    while (t > 0)
    {

       cin >> day;

        switch (month_conversion())
        {
        case 1:
            if (day <= 20) {
                cout << "Capricorn";
            } else {
                cout << "Aquarius";
            }
            break;
        case 2:
            

        }
        month_conversion();
        t--;
    }
    

}

int month_conversion() {

    int day, t, int_month;
    string month;
    cin >> month;
    if (month == "Jan") {
        int_month = 1;
    } else if (month == "Feb") {
        int_month = 2;
    } else if (month == "Mar") {
        int_month = 3;
    } else if (month == "Apr") {
        int_month = 4;
    } else if (month == "May") {
        int_month = 5;
    } else if (month == "Jun") {
        int_month = 6;
    } else if (month == "Jul") {
        int_month = 7;
    } else if (month == "Aug") {
        int_month = 8;
    } else if (month == "Sep") {
        int_month = 9;
    } else if (month == "Oct") {
        int_month = 10;
    } else if (month == "Nov") {
        int_month = 11;
    } else if (month == "Dec") {
        int_month = 12;
    }

    return int_month;
}

string astro_sign() {

    int day;
    cin >> day;

    switch (month_conversion())
    {
    case 1:
        if (day <= 20) {
            return "Capricorn";
        } else {
            return "Aquarius";
        }
        break;
    
    default:
    return "invalid date";
        break;
    }
    

}

