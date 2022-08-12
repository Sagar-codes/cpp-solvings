#include <bits/stdc++.h>
using namespace std;

bool check(int a,int b,int c){
    int y,z;
    int x = max(a,max(b,c));
    if(x == a)
    {
        y=b;
        z=c;

    }
    if(x == b)
    {
        y=a;
        z=c;
    }
    if(x == c)
    {
        y=a;
        z=b;
    }
    if((x*x)==(y*y) + (z*z)){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if(check(x,y,z)){
        cout << "Pythagorial Triplet"<<endl;
    }
    else{
        cout << "Not A Pythagorial Triplet"<<endl;
    }
    return 0;
}