#include <stdio.h>

int main() {
    int i1 = -1; long l1 = -1; unsigned short us1 = 65535;
    float f1 = 123.456; char c1 = 'a';

    printf("i1 = %d, i1 = %o, i1 = %x, i1 = %u\n", i1, i1, i1, i1);
    printf("l1 = %ld, l1 = %lo, l1 = %lx, l1 = %lu\n", l1, l1, l1, l1);
    printf("us1 = %d, us1 = %o, us1 = %x, us1 = %u\n", us1, us1, us1, us1);
    printf("f1 = %f, f1 = %7.2f, f1 = %-7.2f, f1 =%e, f1 = %g\n", f1, f1, f1, f1, f1);
    printf("c1 = %c, c1 = %3c, c1 = %-3c\n", c1, c1, c1);
    printf("s1 = %s, s2 = %7.3s, s3 = %-7.3s\n", "12345", "12345", "12345");
    printf("c1 = %d, si1 = %c\n", 'a', 65);
    printf("%d, %%, %d\n", 65, 3);
}