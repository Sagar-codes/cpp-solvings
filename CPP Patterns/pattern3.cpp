#include<iostream>
using namespace std;
// Inverted Half Pyramid Pattern

int main(){
    int n = 5;
    for(int row = 1; row <=n; row++){
        for(int col = 1; col <=row; col++){
            cout<< "*";
        }
        cout << endl;
    }

    // 360 rotation pattern
    for(int row = 1; row <=n; row++){
        for(int col = 1; col <=n-row; col++){
            cout<< "*";
        }
        cout << endl;
    }
}