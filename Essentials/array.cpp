#include <bits/stdc++.h>
#include<array> 

using namespace std;
 
int main() {
    // Integer takes 4 bytes uisng sizeof()

    // Initailizing with size of an array
    int A[5];
    // Declaring the array with index
    A[0]=12; 
    A[1]=13;
    A[2]=14;

    cout << "Size Of A " << sizeof(A) << endl;
    cout << A[0] << ',' << A[1] << ',' << A[2] << ',' << A[3] << ',' << A[4] << ',' << endl;

    // Initailizing and Declaring with size of an array
    int B[10] = {2,4,6,8,10};

    cout << "Size Of B " << sizeof(B) << endl;
    cout << B[0] << ',' << B[1] << ',' << B[2] << ',' << B[3] << ',' << B[4] << ',' << endl;

    // Initailizing and Declaring without size of an array
    int C[] = {2,4,6,8,10,12,14};

    cout << "Size Of C " << sizeof(C) << endl;
    cout << C[0] << ',' << C[1] << ',' << C[2] << ',' << C[3] << ',' << C[4] << ',' << endl;

    // Accesing array using foreach loop
    for(int x: B){
        cout << x << endl;
    }

    //  Accesing array using for loop
    for(int i; i<sizeof(C); i++){
        cout << C[i] << endl;
    }

    // Variable Sized array
    int n;
    cout << "Enter a Size : ";
    cin >> n;
    int D[n];
    D[0] = 100;

    for(int y:D){
        cout << y << endl;
    }


    return 0;
}