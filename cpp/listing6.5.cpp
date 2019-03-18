#include <iostream>
using namespace std;

class A {
    int a;
public:
    void seta(int x) {a = x;}
    void showa() {cout << "a: " << a << endl;}
};

class B {
    int b;
public:
    void setb(int x) {b = x;}
    void showb() {cout << "b: " << b << endl;}
};

class C:public A, private B {
    int c;
public:
    void setc(int x, int y) {c = x; setb(y);}
    void showc() {showb(); cout << " c:" << c << endl;}
};

int main() {
    C c;
    c.seta(53);
    c.showa();
    c.setc(55, 58);
    c.showc();
}