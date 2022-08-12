#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

// 1        5        3
// 1^3 = 1
// 5^3 = 125
// 3^3 = 27
// total = 1+125+27 == 153 is and armstrong number

int main(){
    int n = 153;
    int sum = 0;
    int originalNumber = n;
    while(n>0){
        int lastDigit = n%10;
        sum+= pow(lastDigit,3);
        n=n/10;
    }
    // cout << sum << endl;

    if(sum == originalNumber){
        cout << "ArmStrong Number"<<endl;
    }


    return 0;
    
}