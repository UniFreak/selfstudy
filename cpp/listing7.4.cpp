#include <iostream>
using namespace std;

class Point {
    int x, y;
public:
    Point(int a, int b): x(a), y(b) {}
    void show() {
        cout << "x:" << x << " y:" << y << endl;
    }
};

template <class T>
class Line: public Point {
    T x1, y1;
public:
    Line(int a, int b, T c, T d): Point(a, b), x1(c), y1(d) {}
    void show() {
        Point::show();
        cout << "x1:" << x1 << " y1:" << y1 << endl;
    }
};

int main() {
    Point a(3, 8);
    a.show();
    Line <int> ab(4, 5, 6, 7);
    ab.show();
    Line <double> ad(4, 5, 6.5, 7.8);
    ad.show();
}