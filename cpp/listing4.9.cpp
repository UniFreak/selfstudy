#include <iostream>
using namespace std;

class Point {
    private:
        int x, y;
    public:
        Point(int a= 0, int b= 0):x(a),y(b) {
            cout << "initing..." << endl;
        }

        Point(const Point& p);

        int getx() {
            return x;
        }

        int gety() {
            return y;
        }

        void show() {
            cout << "x:" << x << ";y:" << y << endl;
        }

        ~Point() {
            cout << "deleting..." << x << ", " << y << endl;
        }
};

Point::Point(const Point& p) {
    x = p.x;
    y = p.y;
    cout << "copying... " << endl;
}

void display(Point p) {
    p.show();
}

void disp(Point& p) {
    p.show();
}

Point func() {
    Point A(101, 202);
    return A;
}

int main() {
    Point A(42, 35);
    Point B(A); // first copy
    Point C(58, 94);

    cout << "calling display(B)" << endl;
    display(B); // second copy

    cout << "calling disp(B)" << endl;
    disp(B);

    cout << "calling C = fun()" << endl;
    C = func();

    cout << "calling disp(C)" << endl;
    disp(C);

    cout << "out..." << endl;
}
