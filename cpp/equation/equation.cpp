#include "equation.h"

FindRoot::FindRoot(float a, float b, float c):a(a),b(b),c(c) {
    d = b*b - 4*a*c;
}

void FindRoot::find() {
    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
    } else if (d == 0) {
        x1 = x2 = (-b) / (2*a);
    } else {
        x1 = (-b) / (2*a);
        x2 = sqrt(-d) / (2*a);
    }
    return;
}

void FindRoot::display() {
    if (d > 0) {
        cout << "x1=" << x1 << "\nx2=" << x2 << endl;
    } else if (d == 0) {
        cout << "x1 = x2 = " << x1 << endl;
    } else {
        cout << "x1 = " << x1 << "+" << x2 << "i" << endl;
        cout << "x2 = " << x1 << "-" << x2 << "i" << endl;
    }
}