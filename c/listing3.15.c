#include <stdio.h>

int main() {
    int n = 10, m = 3;
    float f = 5.0, g = 10.0;
    double d = 5.0, e = 10.0;

    printf("%d\n", -n);
    printf("%d, %d, %d, %d, %d\n", n + m, n - m, n * m, n / m, n % m);
    printf("%f, %f, %f, %f\n", f+g, f-g, f*g, f/g);
    printf("%f\n", n + m - f * g / d);
    printf("%f\n", n%m*f*d);
}