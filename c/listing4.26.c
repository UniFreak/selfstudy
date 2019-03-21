#include <stdio.h>

int main() {
    float x1, x2, x3;
    scanf("%f, %f, %f", &x1, &x2, &x3);
    if (((x1 > x2) && (x2 > x3)) || ((x3 > x2) && (x2 > x1))) {
        printf("%f\n", x2);
    } else if (((x2 > x1) && (x1 > x3)) || ((x3 > x1) && (x1 > x2))) {
        printf("%f\n", x1);
    } else if (((x1 > x3) && (x3 > x2)) || ((x2 > x3) && (x3 > x1))) {
        printf("%f\n", x3);
    }
}