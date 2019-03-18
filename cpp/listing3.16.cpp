#include <iostream>
#include <complex>
#include <string>
using namespace std;

template <class T>
void printer(complex <T> a) {
    cout << "real is: " << a.real() << "; imagin is: " << a.imag() << endl;
}

int main() {
    complex <int> num1(2, 3);
    complex <float> num2(3.4, 5.6);
    printer(num1);
    printer(num2);
}