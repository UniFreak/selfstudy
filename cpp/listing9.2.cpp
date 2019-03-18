#include <iostream>
using namespace std;

class Test {
    int i; float f; char ch;
public:
    Test() {};
    Test(int a, float b, char c): i(a), f(b), ch(c) {}
    friend ostream& operator<<(ostream&, Test&);
    friend istream& operator>>(istream&, Test&);
};

ostream& operator<<(ostream& o, Test& t) {
    o << t.i << ",";
    o << t.f << ",";
    o << t.ch << ",";
    o << endl;
    return o;
}

istream& operator>>(istream& i, Test& t) {
    i >> t.i;
    i >> t.f;
    i >> t.ch;
    return i;
}

int main() {
    Test A(45, 8.5, 'W');
    cout << A;
    Test B, C;
    cout << "input as i f ch:";
    cin >> B >> C;
    cout << B << C;
}