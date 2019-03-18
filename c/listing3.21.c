#include <stdio.h>

int main() {
    char c1 = 'a', c2 = 'A';
    int n1 = 65, n2 = 97;
    float f1 = 0.3e1, f2 = 3.0001;

    printf("%d, %d, %d\n", c1 > c2, n1 == n2, f1 > f2);
    printf("%d, %d, %d\n", c1 >= n1, c2 >= n2, c1 == n2);
    printf("%d, %d, %d\n", f1 > c1, f2 < c2, f1 != n1 - 60);
}