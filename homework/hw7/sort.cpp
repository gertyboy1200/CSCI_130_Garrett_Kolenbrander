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


    int i, key_f, key_v, j; 
    for (i = 1; i < length; i++)
    { 
        key_f = frequency[i];
        key_v = values[i]; 
        j = i - 1; 
  
        while (j >= 0 && frequency[j] < key_f)
        { 
            frequency[j + 1] = frequency[j];
            values[j + 1] = values[j];

            j = j - 1; 
        } 
        frequency[j + 1] = key_f;
        values[j + 1] = key_v; 
    } 

    int total = 0;

    for (int i = 0; i < length; i++){
        total = total + frequency[i];
    }

    int final_arr[total];
    int l = 0, freq_count = 0;
    int values_position = 0;
    int final_arr_position = 0;
    while (values_position < length){
        freq_count = frequency[values_position];
        l = 0;
        while ( l < freq_count){
            final_arr[final_arr_position] = values[values_position];
            l++;
            final_arr_position++;
        }
        values_position++;
    }

    for(int x = 0; x < total; x++) {
        cout << final_arr[x] << " ";
    }
}


int main(){
    int C, N, index = 0;
    cin >> N;
    cin >> C;
    int cipher[N];
    while (index < N) {
        cin >> cipher[index];
        index++;
    }
    values_arr(cipher, N);
   
   return 0;
}