#include <iostream>
using namespace std;

class Point {
    private:
        int x, y;
    public:
        Point(int = 0, int = 0);
        ~Point();
};

Point::Point(int a, int b):x(a),y(b) {
    cout << "init " << a << ", " << b << endl;
}
Point::~Point() {
    cout << "destructing..." << endl;
}

int main() {
    Point* ptr = new Point[2];
    delete [] ptr;
}