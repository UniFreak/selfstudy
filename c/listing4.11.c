#include <stdio.h>
#define PI 3.14159

int main() {
    float r, l, s1, s2, v;
    scanf("%f", &r);
    l = 2 * PI * r;
    s1 = PI * r * r;
    s2 = 4 * PI * r * r;
    v = 4.0 * r * r * r / 3.0;
    printf("r = %f\n", r);
    printf("l = %f, s1 = %f\n", l, s1);
    printf("s2 = %f, v = %f\n", s2, v);
}