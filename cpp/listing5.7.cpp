#include <iostream>
using namespace std;

class Base {
    int a;
    const int b;
    const static int c;
    const int& r;

public:
    Base(int i, int j): a(i), b(j), r(a) {}
    void show() {
        cout << a << "," << b << "," << c << "," << r << endl;
    }
    void display(const double& r) {
        cout << r << endl;
    }
};

const int Base::c = 125;
int main() {
    Base a1(104, 118), a2(119, 140);
    a1.show();
    a2.show();
    a2.display(3.1415);
}