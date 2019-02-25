#include <iostream>
using namespace std;

struct Point {
    private:
        double x, y;

    public:
        Point() {}
        Point(double a, double b) {
            x = a;
            y = b;
        }

        void setxy(double a, double b) {
            x = a;
            y = b;
        }

        void display() {
            cout << x << "\t" << y << endl;
        }
};

int main() {
    Point a;
    Point b(18.5, 10.6);
    a.setxy(10.6, 18.5);
    a.display();
    b.display();
}