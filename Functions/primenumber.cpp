#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i<=sqrt(n); i++){
        if(n%i == 0){
           return false;
        }
    }
    return true;
}
int main(){
    int n = 13;
    // if(n%2==0){
    //     cout << n <<" Is Non-Prime number"<<endl;
    // }else{
    //     cout << n <<" Is Prime number"<<endl;
    // }
    // return 0;

    // bool flag = 0;
    // for(int i = 2; i<=sqrt(n); i++){
    //     if(n%i == 0){
    //         cout <<"Non-Prime"<<endl;
    //         flag = 1;
    //         break;
    //     }
    // }
    // if (flag == 0)
    // {
    //     cout << "Prime"<<endl;
    // }


    // Prime Number Between User Input


    int a  = 10;
    int b = 30;
    for (int i = a; i <= b; i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}
