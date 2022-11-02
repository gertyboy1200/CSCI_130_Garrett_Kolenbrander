#include <iostream>
#include <cstring>
 
using namespace std; 

int main() {

    string word, alphabet;
    cin >> word >> alphabet;
 
    int word_length = word.length();
    int alphabet_length = alphabet.length();
    int alphabet_index = 0, win = 0, lose = 0, compare;

    char word_array[word_length];
    char alphabet_array[alphabet_length];

    strcpy(word_array, word.c_str());
    strcpy(alphabet_array, alphabet.c_str());
 

    for (int j = 0; j < alphabet_length; j++) {
        compare = win;
        for (int i = 0; i < word_length; i++) {
            if (word_array[i] ==  alphabet_array[j]) {
                win++;
            }
        }
        if (win == word_length) {
            cout << "WIN";
            return 0;
        } else if(lose == 10){
            cout << "LOSE";
            return 0;
        } else if (compare == win) {
            lose++;
        }
    }

    return 0;
}