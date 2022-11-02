#include <iostream>
#include <iomanip>

using namespace std;

struct car_data {
    int car_number;
    int miles_driven;
    int gallons_used;
};

int main() {

    int num_of_cars;
    double total_miles = 0, total_gallons = 0;
    cout << "enter the number of cars in the fleet: ";
    cin >> num_of_cars;
    struct car_data fleet[num_of_cars];



    for (int i = 0; i < num_of_cars; i++){
        cout << "enter the car number: ";
        cin >> fleet[i].car_number;
        cout << "enter the miles driven for car: ";
        cin >> fleet[i].miles_driven;
        cout << "enter the number of gallons used: ";
        cin >> fleet[i].gallons_used;
    }

    cout << "Car# " << setw(11) << " MiDriven " << setw(14) << " GalofGas" << setw(14) << " MPG" << endl;
    for (int i = 0; i < num_of_cars; i++){
        cout << fleet[i].car_number << setw(11) << fleet[i].miles_driven << setw(11) << fleet[i].gallons_used << setw(14) << fleet[i].miles_driven / fleet[i].gallons_used << endl;
    }

    for (int i = 0; i < num_of_cars; i++){
        total_miles += fleet[i].miles_driven;
        total_gallons += fleet[i].gallons_used;
    }

    cout << "total average MPG: " << total_miles / total_gallons;



    return 0;
}
