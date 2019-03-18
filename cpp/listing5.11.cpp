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
    Test* one[2] = {new Test(2), new Test(4)};
    Test* two[2] = {new Test(3, 3.3), new Test(4, 4.4)};
    for (int i = 0; i < 2; i++) {
        cout << "one[" << i << "]=" << one[i]->getnum() << endl;
    }
    for (int i = 0; i < 2; i++) {
        cout << "two[" << i << "]=(" << two[i]->getnum() << "," << two[i]->getf() << ")" << endl;
    }
}