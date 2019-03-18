#include <iostream>
#include <cmath>
using namespace std;

class Point {
    double x, y;
public:
    Point(double a, double b) {
        x = a;
        y = b;
    }
    double getx() {return x;}
    double gety() {return y;}
    friend double distance(Point&, Point&);
};

double distance(Point& a, Point& b) {
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return sqrt(dx*dx + dy*dy);
}

int main() {
    Point a(3.5, 5.5);
    Point b(4.5, 6.5);
    cout << "distance is: " << distance(a, b) << endl;
}