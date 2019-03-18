#include <iostream>
using namespace std;

template <class T>
T max(T a, T b) {
    return a > b ? a : b;
}

int main() {
    cout << ::max(1, 2) << "\t"
         << ::max(2.5, 1.2) << "\t"
         << ::max('a', 'm') << "\t"
         << ::max("abc", "def") << endl;
}