#include <stdio.h>

int main() {
    float a, b, c, *pa = &a, *pb = &b, *pc = &c, max;
    scanf("%f, %f, %f", pa, pb, pc);
    if (*pa > *pb) {
        max = *pa;
    } else {
        max = *pb;
    }

    if (*pc > max) {
        max = *pc;
    }

    printf("max is %f\n", max);
}