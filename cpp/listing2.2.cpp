#include <iostream>
using namespace std;

struct Point {
    private:
        double x, y;

    public:
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
    a.setxy(10.6, 18.5);
    a.display();
}