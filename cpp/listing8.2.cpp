#include <iostream>
using namespace std;

const double PI = 3.14159;

class Point {
    double x, y;
public:
    Point(double a, double b): x(a), y(b) {}
    virtual double area() {return 0;}
};

class Circle: public Point {
    double r;
public:
    Circle(double a, double b, double r): Point(a, b), r(r) {}
    double area() {return PI * r * r;}
};

void display(Point* a) {
    cout << a->area() << endl;
}
void display(Point& a) {
    cout << a.area() << endl;
}

int main() {
    Point a(1.5, 6.7);
    Circle c(1.5, 6.7, 2.5);
    Point* p = &c;
    Point& rc = c;
    display(a);
    display(p);
    display(rc);
}