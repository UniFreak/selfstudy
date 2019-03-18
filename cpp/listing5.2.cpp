class Test {
    static int x;
    int n;

public:
    Test() {}
    Test(int a, int b) {
        x = a;
        n = b;
    }
    static int func() {
        return x;
    }
    static void sfunc(Test& r, int a) {
        r.n = a;
    }
    int getn() {
        return n;
    }
};ss

int Test::x = 25;

#include <iostream>
using namespace std;

int main() {
    cout << Test::func();
    Test b, c;
    b.sfunc(b, 58);
    cout << " " << b.getn() << " " << b.func() << " " << c.func() << endl;;
    Test a(24, 56);
    cout << " " << a.func() << " " << b.func() << " " << c.func() << endl;
}