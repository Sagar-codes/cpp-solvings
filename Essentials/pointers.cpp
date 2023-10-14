#include <bits/stdc++.h>

using namespace std;

int main(){

    // **Note: pointer takes 8 bytes on 64-bit machine and 4 bytes on 32-bit machine

    // creating pointer in stack memory
    int a = 10;
    int *p; // Declaration of a pointer
    p = &a; // initialisation
    cout << a << endl;
    cout << " address of the pointer P : "<< p << endl;
    cout << " address of the variable : "<< &a << endl;
    cout << *p << endl; // *p is called as dereferencing in pointer

        // pointer to an array
    int A[5] = {2,4,6,8,10};
    int *q;
    q = A; // The Syntax is you don't have to give ampercent when you are giving array name to the pointer.

    cout << "First element of array address : " << &A[0] << endl;

    // accesing the array using loop with pointer
    for(int i=0; i<5; i++){
        cout << q[i] << endl;
    }
    

    // creating pointer in heap memory
    int *pp;
    pp = new int[5]; // creating a array in heap
    
    pp[0] = 1; pp[1] = 2; pp[2] = 3; pp[3] = 4; pp[4] = 5;

    for(int j=0; j<5; j++){
        cout << pp[j] << endl;
    }

    delete []pp; // while creating a array in heap, after finished we have to delete also.

    return 0;
}