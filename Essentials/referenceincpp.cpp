#include <bits/stdc++.h>

using namespace std;

int main(){

    int a = 10;
    int &r = a; // reference declation starts with &
    r++;

    cout<< r << endl;
    cout<< a << endl;

    return 0;
}