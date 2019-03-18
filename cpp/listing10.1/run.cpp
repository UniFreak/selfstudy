#include "cpp10.cpp"

int main() {
    Point a;
    Point b(7.8, 9.8), c(34.5, 67.8);
    a = c;
    a.display();
    b.display();
    cout << "points distance:" << a.distance(b) << endl;

    Cow cw = {3, 5};
    Line s(a, b, cw);
    Line s1(s);
    cout << "line attr are:" << endl;
    s1.display();
    cout << "line length: " << s1.distance() << endl;
    cout << "line area: " << s1.area() << endl;
}