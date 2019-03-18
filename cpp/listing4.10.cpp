class Max {
    private:
        int a, b, c, d;
        int maxi(int, int);
    public:
        void set(int, int, int, int);
        int maxi();
} A[3];

int Max::maxi(int x, int y) {
    return (x > y) ? x : y;
}

void Max::set(int x, int y, int m = 0, int n = 0) {
    a = x;
    b = y;
    c = m;
    d = n;
}

int Max::maxi() {
    int x = maxi(a, b);
    int y = maxi(c, d);
    return (x > y) ? x : y;
}

#include <iostream>xsw
using namespace std;
int main() {
    A[0].set(12, 45, 76, 89);
    A[1].set(12, 45, 76);
    A[2].set(12, 45);
    for (int i = 0; i < 3; i++) {
        cout << A[i].maxi() << endl;
    }
}