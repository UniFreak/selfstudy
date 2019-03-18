#include "equation.cpp"

void read(float& a, float& b, float& c) {
    cout << "input a:";
    cin >> a;
    if (a == 0) {
        getchar();
        return;
    }
    cout << "input b:";
    cin >> b;
    cout << "input c:";
    cin >> c;
}

int main() {
    float a, b, c;
    cout << "this programme calculate ax^2 + bx + c = 0" << endl;
    for (;;) {
        read(a, b, c);
        if (a == 0) {
            return -1;
        }
        FindRoot o(a, b, c);
        o.find();
        o.display();
    }
}