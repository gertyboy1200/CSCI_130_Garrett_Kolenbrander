#include <iostream>

using namespace std;

int main() 
{ 
    int N, C, array_place = 0;
    cout << "enter n: ";
    cin >> N;
    int cipher[N];
    cout << "test" << endl;
    while (array_place < N) {
        cin >> cipher[array_place];
        array_place++;
    }

    int visited[N];

    for(int i=0; i<N; i++){

        if(visited[i]!=1){
           int count = 1;
           for(int j=i+1; j<N; j++){
              if(cipher[i]==cipher[j]){
                 count++;
                 visited[j]=1;
              }
            }

            cout<<cipher[i]<<" occurs at "<<count<<" times "<<endl;
         }
     }

    return 0; 
}

/*int main() {

    int i = 0;

    while (i <= 1000) {
        cout << i << endl;
        i++;
    }
}*/