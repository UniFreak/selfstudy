#include <stdio.h>

int main() {
    char c1, c2;
    int i1, i2;
    long l1, l2;
    float f1, f2;
    double d1, d2;

    scanf("%c%c", &c1, &c2);
    scanf("%d, %d", &i1, &i2);
    scanf("%3ld%4ld", &l1, &l2);
    scanf("%f, %e", &f1, &f2);
    scanf("%lf, %le", &d1, &d2);

    printf("%c, %c, %d, %d, %ld, %ld, %f, %e, %lf, %le\n", c1, c2, i1, i2, l1, l2, f1, f2, d1, d2);
}