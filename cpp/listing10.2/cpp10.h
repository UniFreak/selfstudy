#if !defined(HEADER_CPP10)
#define HEADER_CPP10
#include <iostream>
#include <cmath>
using namespace std;

class Point {
protected:
    double x, y;
public:
    Point(double = 0, double = 0);
    Point(Point&);
    virtual void display() {cout << x << ", " << y << endl;};
    virtual double area() {return 0;}
    double distance(Point&);
    double getx() {return x;}
    double gety() {return y;}
};

struct Cow {
    int color;
    int width;
};

class Line:public Point {
    double x2, y2;
    Cow cw;
public:
    Line(double, double, double, double, Cow&);
    Line(Line&);
    void display();
    double area();
    double distance();
    double getx2() {return x2;}
    double gety2() {return y2;}
    double getc() {return cw.color;}
    double getw() {return cw.width;}
    friend void disp(Line& l) {cout << l;} 
    friend ostream& operator<<(ostream&, Line&);
};

#endif