#include "cpp10.h"

Point::Point(double a, double b): x(a), y(b) {}
Point::Point(Point& p) {
    x = p.x;
    y = p.y;
}
double Point::distance(Point& a) {
    return sqrt((a.x - x) * (a.x - x) + (a.y - y) * (a.y - y));
}


Line::Line(double a1, double a2, double a3, double a4, Cow& a5): 
    Point(a1, a2), x2(a3), y2(a4), cw(a5) {}
Line::Line(Line& l): Point(l), x2(l.x2), y2(l.y2), cw(l.cw) {};
void Line::display() {
    Point::display();
    cout << x2 << ", " << y2 << endl;
    cout << "color:" << cw.color << ", width:" << cw.width << endl;
}
double Line::distance() {
    double dx = x - x2;
    double dy = y - y2;
    return sqrt(dx * dx + dy * dy);
}
double Line::area() {
    return distance() * cw.width;
}

ostream& operator<<(ostream& o, Line& l) {
    o << "reloading ostream" << endl;
    o << l.x << ", ";
    o << l.y << ", ";
    o << l.x2 << ", ";
    o << l.y2 << ", ";
    o << l.getc() << ", ";
    o << l.getw() << ", ";
    o << endl;
    return o;
}