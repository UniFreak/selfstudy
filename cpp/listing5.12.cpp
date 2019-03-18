#include <iostream>
using namespace std;

class A {
    int val;
public:
    A(int a): val(a) {};
    int value(int a) {return val + a;}
};

int main() {
    int (A::*pv)(int);
    pv = &A::value;
    A o(10);
    cout << (o.*pv)(15) << endl;
    A *po = &o;
    cout << (po->*pv)(15) << endl;
}