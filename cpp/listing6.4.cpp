#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    Point(int a, int b):x(a),y(b) {cout << "Point ..." << endl;}
    void show() {cout << "x:" << x << " y:" << y << endl;}
};

class Rectangle: private Point {
    int h, w;
public:
    Rectangle(int a, int b, int c, int d):Point(a, b),h(c),w(d) {
        cout << "Rectangle..." << endl;
    }
    void show() {Point::show(), cout << " h:" << h << " w:" << w << endl;}
};

class Test: public Rectangle {
public:
    Test(int a, int b, int c, int d): Rectangle(a, b, c, d) {}
    void show() {Rectangle::show();}
};

int main() {
    Point a(3, 4);
    Rectangle b(3, 4, 5, 6);
    Test t(7, 8, 9, 10);
    a.show();
    b.show();
    t.show();
}