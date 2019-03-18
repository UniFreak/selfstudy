#include <iostream>
using namespace std;

class Base {
public:
    virtual void print() {cout << "in Base" << endl;}
};

class Derived: public Base {
public:
    void print() {cout << "in Derived" << endl;}
};

void display(Base* pb, void(Base::*pf)()) {
    (pb->*pf)();
}

int main() {
    Base b;
    Derived d;
    display(&b, &Base::print);
    display(&d, &Base::print);
}