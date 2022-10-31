#include <iostream>
 
using namespace std; 

void print_array(int A, int gis_arr[]) {
    for (int i = 0; i < A; i++)
        cout << gis_arr[i] << " ";
}

int countDistinct(int gis_arr[], int index){
   int i, j, count = 1;
   for (i = 1; i < index; i++){
      for (j = 0; j < i; j++){
            if (gis_arr[i] == gis_arr[j]) {
            break;
         }
      }
      if (i == j){
         count++;
      }
   }
   return count;
}


int main() {

    int length, A, index = 1;
    cin >> A;
    int gis_arr[A];
    int full_arr[A];
    for (int i = 0; i < A; i++)
        cin >> full_arr[i];

    gis_arr[0] = full_arr[0];

    for (int j = 1; j < A; j++){
        if (full_arr[j] > full_arr[j - 1]){
            gis_arr[index] = full_arr[j];
            index++; 
        }
    }

    cout << countDistinct(gis_arr, index) << endl;
    print_array(index, gis_arr);

    return 0;
}