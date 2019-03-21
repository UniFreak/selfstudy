#include <stdio.h>
#include <math.h>

int main() {
    float pi = 0.0, n = 1.0, s = 1.0, t;
    do {
        t = s / n;
        pi += t;
        s *= -1.0;
        n += 2;
    } while (fabs(t) >= 1e-4);
    printf("pi = %f\n", 4 * pi);
}