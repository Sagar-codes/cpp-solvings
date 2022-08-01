#include<iostream>
using namespace std;
// Hollow Rectangle Pattern

int main(){
    int n = 5, m = 4;
    for(int row = 1; row <=n; row++){
        for(int col = 1; col <=m; col++){
            if(row == 1 || row == n){
                cout << "*";
            }
            else if(col == 1 || col == m){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}