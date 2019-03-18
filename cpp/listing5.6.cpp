#include <iostream>
using namespace std;

class Two {
    int x;
public:
    friend class One;
};

class One {
    int x;
public:
    One(int a, int b, Two& t) {
        x = a;
        t.x = b;
    }

    void display(Two& t) {
        cout << x << ", " << t.x << endl;
    }
};

int main() {
    Two t;
    One o(23, 34, t);
    o.display(t);
}