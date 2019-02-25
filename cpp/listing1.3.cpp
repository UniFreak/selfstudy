#include <iostream>
using namespace std;

int main() {
    double *p;
    p = new double[3];
    for (int i = 0; i < 3; i++) {
        cin >> *(p + i);
    }
    for (int i = 0; i < 3; i++) {
        cout << *(p + i) << " ";
    }
    delete p;
}