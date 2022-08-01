#include<iostream>
using namespace std;
// Half Pyramid after 180 degree rotation Pattern

int main(){
    int n = 5;
    for(int row = 1; row <=n; row++){
        for(int col = 1; col<=n; col++){
            if(col<=n-row){
                cout<< " ";
            }
            else{
                cout<< "*";
            }
        }
        cout << endl;
    }
}