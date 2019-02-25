#include <iostream>
using namespace std;

int max(int, int);
int max(int, int, int);

int main() {
    cout << max(35, 25) << ", " << max(25, 39, 35) << endl;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int max(int a, int b, int c) {
    int temp = max(a, b);
    return max(temp, c);
}