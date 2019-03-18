#include <iostream>
using namespace std;

template <class T>
class Max4 {
    T a, b, c, d;
    T max(T, T);
public:
    Max4(T, T, T, T);
    T max();
};

template <class T>
Max4 <T>::Max4(T a, T b, T c, T d):a(a), b(b), c(c), d(d) {}
template <class T>
T Max4 <T>::max(T a, T b) {
    return (a > b) ? a : b;
}
template <class T>
T Max4 <T>::max() {
    return max(max(a, b), max(c, d));
}

int main() {
    Max4 <char> c('W', 'w', 'a', 'A');
    Max4 <int> i(1, 2, -2, -4);
    Max4 <double> d(1.25, 4.3, -8.6, 3.5);
    cout << c.max() << ", " << i.max() << ", " << d.max() << endl;
}