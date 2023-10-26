#include <bits/stdc++.h>

using namespace std;

void printTillN(int n){
    cout << "Calling printTillN" << endl;
    if(n > 0){
        cout << n << endl;
        printTillN(n-1);
    }
};

void printTillNReverse(int n){
    cout << "Calling PrintTillNReverse" << endl;
    if(n > 0){
        printTillNReverse(n-1);
        cout << n << endl;
    }
};

int main (){    

    int x = 3;
    printTillN(x);
    printTillNReverse(x);

    return 0;
}