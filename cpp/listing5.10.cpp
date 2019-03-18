class Test {
    int num;
    float f1;

public:
    Test(int a):num(a) {}
    Test(int a, float b):num(a),f1(b) {}
    int getnum() {return num;}
    float getf() {return f1;}
};

#include <iostream>
using namespace std;

int main() {
    Test one[2] = {2, 4}, *p;
    Test two[2] = {Test(1, 3.2), Test(5, 9.5)};
    for (int i = 0; i < 2; i++) {
        cout << "one[" << i << "] = " << one[i].getnum() << endl;
    }

    p = two;
    for (int i = 0; i < 2; i++, p++) {
        cout << "two[" << i << "] = (" << p->getnum() << ", "
             << p->getf() << ")" << endl;
    }
}