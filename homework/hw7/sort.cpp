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
    int frequency[countDistinct(cipher, N)];
    for (int i = 0; i < N; i++ ){
        int j;
        for (j = 0; j < i; j++){
            if (cipher[i] == cipher[j])
            break;
        } 
        if (i == j){
            frequency[array_place] = cipher[i];
            array_place++;
        }

    }
    int length = sizeof(frequency) / sizeof(frequency[0]);
    for(int x = 0; x < length; x++) {
        cout << frequency[x] << " ";
    }

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