#include <bits/stdc++.h>

using namespace std;

// Fucntion is group of related instructions which perform a related tasks. Fuction are called as modules or procedures 
// Function Types: 

// parameter passing:
    // 1. Pass by value.
    // 2. pass by address.
    // 3. pass by reference.

void swap(int x, int y){ // pass by value
    int temp;
    temp = x;
    x = y;
    y = temp;

    cout << "Pass By Value" << x << " " << y << endl;
}

void swapByAddress(int *x, int *y){ // pass by address
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    cout << "Pass By address" << *x << " " << *y << endl;;
}


void swapByReference(int &x, int &y){ // pass by Refernce

    int temp;
    temp = x;
    x = y;
    y = temp;

    cout << "Pass By Reference" << x << " " << y << endl;;
}

int add(int a, int b){
    int c = a+b;
    return c;
}

int main(){

    int a = 10;
    int b = 12;
    int sum;
    sum = add(a, b);
    cout << "The Sum of the Two Nums is : " << sum << endl;

    swap(a, b); // passing the value
    swapByAddress(&a, &b); // passing reference of the variable
    swapByReference(a, b); // passing by reference
    return 0;
}