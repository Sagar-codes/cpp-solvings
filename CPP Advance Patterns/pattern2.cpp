#include <iostream>
using namespace std;
// 0<>1 Pattern

// rows = 1<>n
// columns = 1 <> row number
// elements = row number+ columns number === even then print 1 else if it is odd number then print 0;
int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if((i+j)%2==0){
                cout << "1";
            }
            else{
                cout << "0";
            }
        }
        cout << endl;
    }

    return 0;
}