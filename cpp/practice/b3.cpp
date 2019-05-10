#include <iostream>
#include <math.h>
using namespace std;

class Triangle {
private:
    float a, b, c;
public:
    Triangle(float a1, float b1, float c1) {
        a = a1;
        b = b1;
        c = c1;
    }
    bool isValid() {
        return a + b > c && b + c > a && a + c > b;
    }
    float getCircum() {
        return a + b + c;
    }
    float getArea() {
        float p = getCircum() / 2;
        return sqrt(p * (p-a) * (p-b) * (p-c));
    }
};

int main() {
    float a, b, c;
    cout << "input a, b, c:";
    cin >> a >> b >> c;

    Triangle t(a, b, c);
    cout << "is valid: " << t.isValid() << endl;
    cout << "circum: " << t.getCircum() << endl;
    cout << "area: " << t.getArea() << endl;
}