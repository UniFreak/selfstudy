#include <iostream>
using namespace std;

class test {
    int n;
public:
    test(int i):n(i) {
        cout << "constructor:" << n << endl;
    }
    ~test() {
        cout << "destructor:" << n << endl;
    }
    int getn() {
        return n;
    }
    void inc() {
        ++n;
    }
};

int main() {
    cout << "loop start" << endl;
    for (int i = 0; i < 3; i++) {
        static test a(3);
        test b(3);
        a.inc();
        b.inc();
        cout << "a.n=" << a.getn() << endl;
        cout << "b.n=" << b.getn() << endl;
    }
    cout << "loop end" << endl;
    cout << "exit" << endl;
}