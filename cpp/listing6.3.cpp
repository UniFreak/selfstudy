#include <iostream>
using namespace std;

class Point {
protected:
    int x, y;
public:
    Point(int a, int b):x(a),y(b) {cout << "Point ..." << endl;}
    void show() {cout << "x:" << x << " y:" << y << endl;}
    ~Point() {cout << "Delete point..." << endl;}
};

class Rectangle: public Point {
    int h, w;
public:
    Rectangle(int a, int b, int c, int d):Point(a, b),h(c),w(d) {
        cout << "Rectangle..." << endl;
    }
    void show() {cout << "x:" << x << " y:" << y << " h:" << h << " w:" << w << endl;}
    ~Rectangle() {cout << "Delete Rectangle..." << endl;}
};

int main() {
    Point a(3, 4);
    Rectangle b(3, 4, 5, 6);
    a.show();
    b.show();

    Point& ra = b;
    ra.show();
    Point* pa = &a;
    pa->show();

    Rectangle& rb = b;
    rb.show();
    Rectangle* pb = &b;
    pb->show();
    0
    a = b;0
    a.show();
}