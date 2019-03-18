#include <iostream>
using namespace std;

const double PI = 3.1415926;

class Point {
    double x, y;
public:
    Point(double a, double b): x(a), y(b) {}
    double area() {return 0;}
};

class Circle: public Point {
    double r;
public:
    Circle(double a, double b, double r): Point(a, b), r(r) {}
    double area() {return PI * r * r;}
};

int main() {
    Point a(1.5, 6.7);
    Circle c(1.5, 6.7, 2.5);
    cout << "area of Point is " << a.area() << endl;
    cout << "area of Circle is " << c.area() << endl;

    Point* p = &c;
    cout << "area of Circle is " << p->area() << endl;

    Point& rc = c;
    cout << "area of Circle is " << rc.area() << endl;
}