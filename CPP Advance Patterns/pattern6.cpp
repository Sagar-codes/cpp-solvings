#include <iostream>
using namespace std;
// Star Pattern

// row  = 1<>n
// spaces = 1<>n - row number 
// collumn = 1 <> n
// elements  = 
int main(){
    int n = 4;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++){
            cout << " ";
        }
        for(int j = 1; j <= 2*i-1; j++){
            cout <<"*";
        }
        cout << endl;
    }

    for(int i = n; i>=1; i--){
        for(int j = 1; j <= n-i; j++){
            cout << " ";
        }
        for(int j = 1; j <= 2*i-1; j++){
            cout <<"*";
        }
        cout << endl;
    }


    return 0;
}