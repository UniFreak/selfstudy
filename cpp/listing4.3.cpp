#include <iostream>
using namespace std;

class Point {
    private: 
        int x, y;

    public: 
        void setxy(int a, int b) {
            x = a;
            y = b;
        };
        void move(int dx, int dy) {
            x += dx;
            y += dy;
        };
        void display() {
            cout << x << ", " << y << endl;
        };
        int getx() {
            return x;
        };
        int gety() {
            return y;
        };
};

void print(Point* a) {
    a->display();
}

void print(Point& a) {
    a.display();
}

int main() {
    Point a, b, *p;
    Point& ra = a;
    a.setxy(25, 55);
    b = a;
    p = &b;
    p->setxy(112, 115);
    print(p);
    p->display();
    ra.move(-80, 23);
    print(a);
    print(&a);
}