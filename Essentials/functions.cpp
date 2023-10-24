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

// Passing Array as Parameter
void printArray(int A[], int n){ // arrays is only passed by address, what ever we will change to the array it will change the actual array.
    cout << "Printing Array as Parameter in a function" << endl;
    for(int i = 0; i<n; i++){
        cout << A[i] << endl;
    }
}

// Passing Structure as Parameter
struct Rectangle
{
    int length;
    int breadth;

};

int size(struct Rectangle r1){
    r1.length ++;
    return r1.length*r1.breadth;
}

void changeLength(struct Rectangle *l, int n){
    l->length = n;
}


int add(int a, int b){
    int c = a+b;
    return c;
}

int main(){

    int A[5] = {2,4,6,8,10};
    printArray(A, 5);

    struct Rectangle r = {10, 5};
    cout << "The Area of the Rectangle is : " << size(r) << endl;

    changeLength(&r, 20);
    cout << "Length : " << r.length << endl;
    cout << "Breadth : " << r.breadth << endl;

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