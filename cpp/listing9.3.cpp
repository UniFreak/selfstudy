#include <iostream>
using namespace std;

class number {
    int n;
public:
    number(int a): n(a) {}
    void print() {cout << n << endl;}
    int operator++();
    int operator++(int);
};

int number::operator++() {
    n++;
    return n;
}

int number::operator++(int) {
    int i = n;
    n++;
    return i;
}

int main() {
    number n(10);
    int i = ++n;
    cout << "i:" << i << endl;
    n.print();

    i = n++;
    cout << "i:" << i << endl;
    n.print();
}