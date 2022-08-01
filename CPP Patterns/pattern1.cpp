#include<iostream>
using namespace std;
// Rectangle Pattern

int main(){
    int n = 5, m = 4;
    for(int row = 1; row <=n; row++){
        for(int col = 1; col <=m; col++){
            cout << "*";
        }
        cout << endl;
    }
}