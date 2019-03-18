#include <iostream>
using namespace std;

float* input(int&);
float* input(int& n) {
    cout << "Input a number: ";
    cin >> n;
    if (n < 0) {
        return (float*) NULL;
    }

    float *buf = new float[n];
    if (buf == 0) {
        return (float*) NULL;
    }
    for (int i = 0; i < n; i++) {
        cin >> buf[i];
    }
    return buf;
}

int main() {
    int num;
    float *data;
    data = input(num);
    if (data) {
        for (int i = 0; i < num; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
        delete data;
    }
}