#include <iostream>

class Matrix {
    int* d[];
public:
    Matrix(int a[3], int b[3]) {
        d[0] = a;
        d[2] = b;
    }
    void display() {
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 3; j++) {
                cout << d[i][j] << " ";
            }
            cout << endl;
        }
    }
    friend Matrix& operator+(Matrix& a, Matrix& b);
};

Matrix& operator+(Matrix& a, Matrix& b) {
        Matrix c();
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                c.d[i][j] = a.d[i][j] + b.d[i][j];
            }
        }

        return c;
    }

int main() {
    Matrix a, b, c;
    a.display();
}