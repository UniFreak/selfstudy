#include "cpp10.cpp"

int main() {
    Point a;
    Point b(7.8, 9.8), c(34.5, 67.8);
    a = c;
    a.display();
    b.display();
    cout << "points distance: " << a.distance(b) << endl;

    Cow cw = {3, 5};
    Line s(7.8, 9.8, 34.5, 67.8, cw);
    disp(s);

    Line s1(s);
    cout << "displaying line attrs: " << endl;
    s1.display();
    cout << "line length: " << s1.distance() << endl;
    cout << "line area: " << s1.area() << endl;

    cout << "base object attrs: " << endl;
    a.display();

    cout << "assign line to point" << endl;
    a = s;
    a.display();
    cout << "area: " << a.area() << endl;

    cout << "assign line to point pointer" << endl;
    Point *p = &s1;
    p->display();
    cout << "area: " << p->area() << endl;

    cout << "point refer to line" << endl;
    Point &d = s1;
    d.display();
    cout << "area: " << d.area() << endl;
}