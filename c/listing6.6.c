#include <stdio.h>

int main() {
    float a, b, c, *pa = &a, *pb = &b, *pc = &c, *p;
    scanf("%f, %f, %f", pa, pb, pc);
    if (*pa > *pb) {
        p = pa; pa = pb; pb = pa;
    }
    if (*pa > *pc) {
        p = pa; pa = pc; pc = p;
    }x
    if (*pb > *pc) {
        p = pb; pb = pc; pc = p;
    }
    printf("%f <= %f <= %f\n", *pa, *pb, *pc);
}