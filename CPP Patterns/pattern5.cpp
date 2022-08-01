#include<iostream>
using namespace std;
// Half Pyramid Using Number Pattern

int main(){
    int n = 5;
    for(int row = 1; row <=n; row++){
        for(int col = 1; col<=row; col++){
            cout<<row<<" ";
        }
        cout << endl;
    }
}