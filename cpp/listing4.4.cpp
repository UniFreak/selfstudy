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

Point global(5, 10);

int main() {
    cout << "enter main" << endl;
    Point A;
    Point B(15, 25);
    Point C[2];
    Point D[2] = {Point(5, 7), Point(8, 12)};
}