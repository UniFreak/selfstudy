#if !defined(EQUATION_H)
#define EQUATION_H
#include <iostream>
#include <cmath>
using namespace std;

class FindRoot {
    float a, b, c, d;
    double x1, x2;
public:
    FindRoot(float, float, float);
    void find();
    void display();
};
#endif