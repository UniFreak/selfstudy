#include <iostream>
using namespace std;

class Point {
    private:
        int x, y;
    public:
        Point();
        Point(int, int);
};

Point::Point():x(0),y(0) {
    cout << "init default" << endl;
}

Point::Point(int a, int b):x(a),y(b) {
    cout << "init " << a << ", " << b << endl;
}

int main() {
    Point* ptr1 = new Point;
    Point* ptr2 = new Point(3, 5);
    delete ptr1;
    delete ptr2;
}