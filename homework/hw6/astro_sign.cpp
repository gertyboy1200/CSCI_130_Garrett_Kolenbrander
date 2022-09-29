#include <iostream>
using namespace std;

int month_conversion();

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
                cout << "Capricorn" << endl;
            } else {
                cout << "Aquarius" << endl;
            }
            break;
        case 2:
            if (day <= 19) {
                cout << "Aquarius" << endl;
            } else {
                cout << "Pisces" << endl;
            }
            break;
        case 3:
            if (day <= 20) {
                cout << "Pisces" << endl;
            } else {
                cout << "Aries" << endl;
            }
            break;
        case 4:
            if (day <= 20) {
                cout << "Aries" << endl;
            } else {
                cout << "Taurus" << endl;
            }
            break;
        case 5:
            if (day <= 20) {
                cout << "Taurus" << endl;
            } else {
                cout << "Gemini" << endl;
            }
            break;
        case 6:
            if (day <= 21) {
                cout << "Gemini" << endl;
            } else {
                cout << "Cancer" << endl;
            }
            break;
        case 7:
            if (day <= 22) {
                cout << "Cancer" << endl;
            } else {
                cout << "Leo" << endl;
            }
            break;
        case  8:
            if (day <= 22) {
                cout << "Leo" << endl;
            } else {
                cout << "Virgo" << endl;
            }
            break;
        case 9:
            if (day <= 21) {
                cout << "Virgo" << endl;
            } else {
                cout << "Libra" << endl;
            }
            break;
        case 10:
            if (day <= 22) {
                cout << "Libra" << endl;
            } else {
                cout << "Scorpio" << endl;
            }
            break;
        case 11:
            if (day <= 22) {
                cout << "Scorpio" << endl;
            } else {
                cout << "Sagittarius" << endl;
            }
            break;
        case 12:
            if (day <= 21) {
                cout << "Sagittarius" << endl;
            } else {
                cout << "Capricorn" << endl;
            }
            break;
        }
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