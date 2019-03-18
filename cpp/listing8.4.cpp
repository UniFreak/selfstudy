#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
};

class Square: public Shape {
protected:
    double h;
public:
    Square(double a): h(a) {} 
    double area() {return h * h;}    
};

class Circle: public Square {
public:
    Circle(double r): Square(r) {}
    double area() {return h * h * 3.14159;}
};

class Triangle: public Square {
protected:
    double w;
public:
    Triangle(double a, double b): Square(a), w(b) {}
    double area() {return h * w * 0.5;}
};

class Rectangle: public Triangle {
public:
    Rectangle(double h, double w): Triangle(h, w) {}
    double area() {return h * w;}
};

double total(Shape* s[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += s[i]->area();
    }
    return sum;
}

int main() {
    Shape *s[5];
    s[0] = new Square(4);
    s[1] = new Triangle(3, 6);
    s[2] = new Rectangle(3, 6);
    s[3] = new Square(6);
    s[4] = new Circle(10);
    for (int i = 0; i < 5; i++) {
        cout << "s[" << i << "] = " << s[i]->area() << endl;
    }
    cout << "total area is: " << total(s, 5);
}
