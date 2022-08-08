#include <iostream>
using namespace std;
// Rhombus Pattern

// row  = 1<>n
// spaces = n<>1 - row number 
// collumn = 1 <> n
// elements  = 
int main(){
    int n = 5;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++) {
            cout << " ";
        }
        for(int j = 1; j <= n; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}