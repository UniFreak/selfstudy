#include <iostream>
using namespace std;

class A {
public:
    virtual void fun() {cout << "Call A" << endl;}
};

class B {
public:
    virtual void fun() {cout << "Call B" << endl;}
};

class C: public A, public B {
public:
    void fun() {cout << "Call C" << endl;}
};

int main() {
    A *pa;
    B *pb;
    C *pc;
    C c;
    pa = &c;
    pb = &c;
    pc = &c;
    pa->fun();
    pb->fun();
    pc->fun();
}