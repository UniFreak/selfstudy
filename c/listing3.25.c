#include <stdio.h>

int main() {
    int n1 = 10, n2 = 10, m1 = 10, m2 = 10, m3 = 10, m4 = 10;

    printf("%d, %d, %d\n", n1 += n2, n1, n2);
    printf("%d, %d, %d\n", n1 -= n2, n1, n2);
    printf("%d, %d, %d\n", n1 *= n2, n1, n2);
    printf("%d, %d, %d\n", n1 /= n2, n1, n2);
    printf("%d, %d, %d, %d, %d\n", m1 += m2 -= m3 *= m4 /= 2, m1, m2, m3, m4);
}