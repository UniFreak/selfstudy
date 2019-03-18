#include <iostream>
using namespace std;

class Two;

class One {
    int x;
public:
    One(int a) {x = a;}
    int getx() {return x;}
    void func(Two&);
};

class Two {
    int x;
public:
    Two(int a) {x = a;}
    int getx() {return x;}
    friend void One::func(Two&);
};

void One::func(Two& t) {
    t.x = x;
}

int main() {
    One o(5);
    Two t(8);
    cout << o.getx() << " " << t.getx() << endl;
    o.func(t);
    cout << o.getx() << " " << t.getx() << endl;
}