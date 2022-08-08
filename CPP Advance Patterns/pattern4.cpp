#include <iostream>
using namespace std;
// Number Pattern

// row  = 1<>n
// spaces = 1<>n - row number 
// collumn = 1 <> n
// elements  = 
int main(){
    int n = 5;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++) {
            cout << " ";
        }
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}