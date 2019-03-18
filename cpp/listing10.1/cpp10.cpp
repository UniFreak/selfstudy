#include "cpp10.h"

Point::Point(double a, double b): x(a), y(b) {}
Point::Point(Point& p) {
    x = p.x;
    y = p.y;
}
double Point::distance(Point& a) {
    return sqrt((a.x - x) * (a.x - x) + (a.y - y) * (a.y - y));
}


Line::Line(Point& x, Point& y, Cow& c): a(x), b(y), cw(c) {}
Line::Line(Line& l): a(l.a), b(l.b), cw(l.cw) {};
void Line::display() {
    a.display();
    b.display();
    cout << "color:" << cw.color << ", width:" << cw.width << endl;
}
double Line::distance() {
    double x = a.getx() - b.getx();
    double y = a.gety() - b.gety();
    return sqrt(x * x + y * y);
}
double Line::area() {
    return distance() * cw.width;
}