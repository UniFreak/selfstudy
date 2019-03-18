#include <iostream>
using namespace std;

int max(int, int);
int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    cout << max(1, max(3, 2));
}