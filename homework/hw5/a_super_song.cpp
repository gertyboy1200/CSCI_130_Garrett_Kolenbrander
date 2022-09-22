#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ifstream infile;
    char ch;
    infile.open("aSuperSong.txt");
    infile.get(ch);


    while(!infile.eof()) {
        cout << ch;
        infile.get(ch);

    }

}