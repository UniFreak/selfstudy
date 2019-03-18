#include <iostream>
using namespace std;

class A {
public:
    void func() {cout << "a.func" << endl;}
};

class B {
public:
    void func() {cout << "b.func" << endl;}
    void gunc() {cout << "b.gunc" << endl;}
};

class C: public A, public B {
public:
    void gunc() {cout << "c.gunc" << endl;}
    void hunc() {A::func();}
};

int main() {
    C c;
    C* cp = new C;
    c.C::gunc();
    cp->C::gunc();
    c.B::func();
    cp->A::func();
}