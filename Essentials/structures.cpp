#include <bits/stdc++.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
} ;// you can declare here also r1, r2, r3;

// struct Rectangle r1, r2, r3; // you can even decalre it also out side of the function

int main() {

    struct Rectangle r1 = {10, 8};
    cout << "Length : " << r1.length << endl;
    cout << "Breadth : " << r1.breadth << endl;

    // we can also apply the struct like this
    struct Rectangle r2;
    r2.length = 20;
    r2.breadth = 8;
    cout << "Length : " << r2.length << endl;
    cout << "Breadth : " << r2.breadth << endl;



    return 0;
}