#include <iostream>
using namespace std;

class Point {
    int x, y;

    public:
        void set(int a, int b) {
            x = a; y = b;
        }

        int getx() {
            return x;
        }

        int gety() {
            return y;
        }
};

class Rectangle {
    Point loc;
    int h, w;

    public:
        void set(int , int , int , int);
        Point* getLoc();
        int geth() {return h;}
        int getw() {return w;}
};

void Rectangle::set(int x, int y, int height, int width) {
    loc.set(x, y);
    h = height;
    w = width;
}

Point* Rectangle::getLoc() {
    return &loc;
}

int main() {
    Rectangle rec;
    rec.set(10, 2, 25, 20);
    cout << rec.geth() << ", " << rec.getw() << endl;
    Point* p = rec.getLoc();
    cout << p->getx() << ", " << p->gety() << endl;
}