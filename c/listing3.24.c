#include <stdio.h>

int main() {
    char c1 = 'a', c2;
    int n1 = 65, n2, n3, n4, n5, n6;
    float f1 = 3.0, f2;

    printf("%d, %d, %d\n", c2 = n1, c2, n1);
    printf("%d, %d, %d\n", n2 = !c1, n2, c1);
    printf("%f, %f, %f\n", f2 = f1 + 0.001, f2, f1);
    printf("%d, %d, %d, %d\n", n3 = c1 == n1 || c1 != n1, n3, c1, n1);
    printf("%d, %d, %d, %d, %d\n", n4 = n5 = n6 = -(--n1), n4, n5, n6, n1);
}