#include <iostream>
using namespace std;

template <class T>
class Point {
    T x, y;
public:
    Point(T a, T b): x(a), y(b) {}
    void show() {
        cout << "x:" << x << " y:" << y << endl;
    }
};

template <class T>
class Line: public Point <T> {
    T x1, y1;
public:
    Line(T a, T b, T c, T d): Point <T>(a, b), x1(c), y1(d) {}
    void show() {
        Point <T>::show();
        cout << "x1:" << x1 << " y1:" << y1 << endl;
    }
};

int main() {
    Point <double> a(3.5, 8.8);
    a.show();
    Line <int> ab(4, 5, 6, 7);
    ab.show();
    Line <double> ac(4.5, 5.5, 6.5, 7.5);
    ac.show();
}