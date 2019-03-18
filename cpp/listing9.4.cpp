#include <iostream>
using namespace std;

class Number {
    int n;
public:
    Number(int a): n(a) {}
    void print() {cout << n << endl;}
    friend int operator++(Number&);
    friend int operator++(Number&, int);
};

int operator++(Number& num) {
    num.n++;
    return num.n;
}

int operator++(Number& num, int) {
    int i = num.n;
    num.n++;
    return i;
}

int main() {
    Number n(10);
    int i = ++n;
    cout << "i:" << i << endl;
    n.print();

    i = n++;
    cout << "i:" << i << endl;
    n.print();
}