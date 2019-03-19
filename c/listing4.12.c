#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main() {
    float a, b, c, d, x1, x2;
    scanf("%f, %f, %f", &a, &b, &c);
    d = b * b - 4 * a * c;
    x1 = (-b + sqrt(d)) / (2 * a);
    x2 = (-b - sqrt(d)) / (2 * a);
    printf("x1 = %f, x2 = %f\n", x1, x2);
}