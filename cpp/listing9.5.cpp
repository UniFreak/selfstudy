#include <iostream>

class complex {
    double real, imag;
public:
    complex(float r = 0, float i = 0): real(r), imag(i) {}
    void show() {std::cout << "r:" << real << ", i:" << imag << std::endl;}
    friend complex operator+(complex, complex);
};

complex operator+(complex a, complex b) {
    return complex(a.real + b.real, a.imag + b. imag);
}

int main() {
    complex x(5, 3), y;
    y = x + 7;
    y = 7 + y;
    y.show();
}