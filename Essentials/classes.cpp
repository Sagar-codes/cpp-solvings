#include <bits/stdc++.h>

using namespace std;

class Rectangle {
    private:
    int length;
    int breadth;

    public:

    // creating a constructor
    Rectangle(int l, int b){
        length=l;
        breadth = b;
    }
    
    void init(int l, int b){
        length = l;
        breadth = b;
    }

    int area(){
        return length*breadth;
    }

    void changeLength(int l){
        length = l;
    }

};

int main(){

    Rectangle r(10, 5);
    r.init(10, 5);
    cout << "The area of the Rectangle is : " << r.area() << endl;
    r.changeLength(20);
    cout << "The area of the Rectangle is : " << r.area() << endl;
    return 0;
}