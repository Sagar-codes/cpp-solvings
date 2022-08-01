#include<iostream>
using namespace std;
//Butterfly Pattern
// spaces are = 2*n-2*row_no
// rows = 1 to n 
// row_no = *: row_no
// for lower part
// row = n to 1
// all will same printing stars and spaces
int main(){
    int n = 4;
// Upper part
    for(int row = 1; row <=n; row++){
        for(int col = 1; col<=row; col++){
        cout << "*";
        }
        int space = 2*n-2*row;
        for(int col = 1; col<=space; col++){
        cout << " ";
        }
        for(int col = 1; col<=row; col++){
        cout << "*";
        }
        cout << endl;
    }
// Lower Part
    for(int row = n; row>=1; row--){
        for(int col = 1; col<=row; col++){
        cout << "*";
        }
        int space = 2*n-2*row;
        for(int col = 1; col<=space; col++){
        cout << " ";
        }
        for(int col = 1; col<=row; col++){
        cout << "*";
        }
        cout << endl;
    }

}