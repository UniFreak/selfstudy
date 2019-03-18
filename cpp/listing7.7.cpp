#include <iostream>
#include <complex>
#include <vector>
using namespace std;

struct st {
    int a, b;
} a[] = {{2, 5}, {4, 8}};

int main() {
    complex <float> comp[] = {complex <float> (2, 3), complex <float> (3.5, 4.5)};
    vector <complex <float>*> vcomp(2);
    vcomp[0] = &comp[0];
    vcomp[1] = &comp[1];
    for (int i = 0; i < 2; i++) {
        cout << "real is:" << vcomp[i]->real() << ", image is: " << vcomp[i]->imag() << endl;
    }

    vector <complex <float> > rcomp(2);
    rcomp[0] = comp[0];
    rcomp[1] = comp[1];
    for (int i = 0; i < 2; i++) {
        cout << "real is:" << rcomp[i].real() << ", image is: " << rcomp[i].imag() << endl;
    }


    vector <st*> vst(2);
    vst[0] = &a[0];
    vst[1] = &a[1];
    for (int i = 0; i < 2; i++) {
        cout << "a:" << vst[i]->a << ", b:" << vst[i]->b << endl;
    }
}