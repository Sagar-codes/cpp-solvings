#include <bits/stdc++.h>

using namespace std;


// Template is actually like polymorphism a class has different data types and fucntion returning types.
template <class T> class Arithmetic{
    private:
    T a;
    T b;

    public:
    Arithmetic(T a, T b);
    T add();
    T sub();

};

template <class T>
Arithmetic<T>::Arithmetic(T a, T b){
    this->a = a;
    this->b = b;
};

template <class T>
T Arithmetic<T>::add(){
    T c;
    c = a+b;
    return c;
};

template <class T>

T Arithmetic<T>::sub(){
    T c;
    c = a-b;
    return c;
};

int main(){
    Arithmetic<int> ar(10, 5);
    cout << "Int " << ar.add()<< endl;
    Arithmetic<float> ar1(10.5, 5.3);
    cout << "Float " << ar1.add()<< endl;
}