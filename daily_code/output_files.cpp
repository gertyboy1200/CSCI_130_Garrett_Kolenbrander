#include <iostream>
#include <fstream>

using namespace std;

int main() {

    cout << "creating an output file please wait";
    
    ofstream my_file;

    my_file.open("example.txt");

    my_file << "did you hear about the monkeys that shared an amazon account?\n";
    my_file << "...\n";
    my_file << "they were prime mates\n";
    my_file.close();

}