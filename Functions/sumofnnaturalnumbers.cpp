#include <bits/stdc++.h>
using namespace std;


int sum(int n){
    // 1+2+3+4+5 = 15 output
    int ans = 0;
    for(int i = 0; i <=n; i++){
        ans += i;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout << sum(n) << endl;
    return 0;
}