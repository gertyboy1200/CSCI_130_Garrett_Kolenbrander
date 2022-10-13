#include <iostream>

using namespace std;

int countDistinct(int cipher[], int N){
   int i, j, count = 1;
   for (i = 1; i < N; i++){
      for (j = 0; j < i; j++){
         if (cipher[i] == cipher[j]){
            break;
         }
      }
      if (i == j){
         count++;
      }
   }
   return count;
}
void values_arr(int cipher[], int N) {
    int array_place = 0;
    int values[countDistinct(cipher, N)];
    for (int i = 0; i < N; i++ ){
        int j;
        for (j = 0; j < i; j++){
            if (cipher[i] == cipher[j])
            break;
        } 
        if (i == j){
        values[array_place] = cipher[i];
            array_place++;
        }

    }
    int length = sizeof(values) / sizeof(values[0]);
    for(int x = 0; x < length; x++) {
        cout <<values[x] << " ";
    }
    cout << endl;
    int frequency[countDistinct(cipher, N)];
    for (int i = 0; i < length; i++)
        frequency[i] = 0;
    
    for (int i = 0; i < length; i++){
        for (int j = 0; j <  N; j++){
            if (values[i] == cipher[j]){
                frequency[i] = frequency[i] + 1;
            }
        }
    }
    cout << "the frequency of the above values are :";
     for(int x = 0; x < length; x++) {
        cout << frequency[x] << " ";
    }
    cout << "in order of apperance";
    cout << endl;

    /*int y, key_freq, key_value, j; 
    for (y = 1; y < length; y++)
    { 
        key_freq = frequency[y]; 
        key_value = values[y];
        j = y + 1; 

        while (j >= 0 && frequency[j] > key_freq)
        { 
            frequency[j - 1] = frequency[j]; 
            values[j - 1] = values[j];
            j = j + 1; 
        } 
        frequency[j - 1] = key_freq; 
        values[j - 1] = key_value;
    } 

     for(int x = 0; x < length; x++) {
        cout << frequency[x] << " ";
    }
    cout << endl;
     for(int x = 0; x < length; x++) {
        cout << values[x] << " ";
    }
    cout << endl;*/
} 



int main(){
    int C, N, index = 0, val;
    cin >> N;
    int cipher[N];
    while (index < N) {
        cin >> cipher[index];
        index++;
    }
    values_arr(cipher, N);


   return 0;
}