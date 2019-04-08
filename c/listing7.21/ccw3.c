#include "ccw1.c"
#include "ccw2.c"
#include <stdio.h>

int main() {
    float x1, x2, x3, max;
    scanf("%f, %f, %f", &x1, &x2, &x3);
    max = max3(x1, x2, x3);
    printf("max (%f, %f, %f) = %f\n", x1, x2, x3, max);
}