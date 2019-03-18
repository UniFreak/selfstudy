#include <iostream>
using namespace std;

class A {
public:
    A() {}
    virtual void func() {cout << "constructor A" << endl;}
    ~A() {}
    virtual void fund() {cout << "destructor A" << endl;}
};

class B: public A {
public:
    B() {func();}
    void fun() {cout << "come here and go..."; func();}
    ~B() {fund();}
};

class C: public B {
public:
    C() {}
    void func() {cout << "class C" << endl;}
    ~C() {fund();}
    void fund() {cout << "destructor C" << endl;}
};

int main() {
    C c;
    c.fun();
}
