#if !defined(HEADER_CPP10)
#define HEADER_CPP10
#include <iostream>
#include <cmath>
using namespace std;

class Point {
    double x, y;
public:
    Point(double = 0, double = 0);
    Point(Point&);
    void display() {cout << x << ", " << y << endl;};
    double distance(Point&);
    double getx() {return x;}
    double gety() {return y;}
};

struct Cow {
    int color;
    int width;
};

class Line {
    Point a, b;
    Cow cw;
public:
    Line(Point&, Point&, Cow&);
    Line(Line&);
    void display();
    double distance();
    double area();
};

#endif