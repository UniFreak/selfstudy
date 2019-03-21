#include <stdio.h>

int main() {
    int x, x1, x2, x3, x4, x5;
    scanf("%d", &x);
    while (x != 0) {
        x5 = x % 10;
        x /= 10; x4 = x % 10;
        x /= 10; x3 = x % 10;
        x /= 10; x2 = x % 10;
        x /= 10; x1 = x % 10;

        printf("sum1 of digiter = %d\n", x1 + x2 + x3 + x4 + x5);
        printf("sum2 of digiter = %d\n", x1*x1 + x2*x2 + x3*x3 + x4*x4 + x5*x5);
        scanf("%d", &x);
    }
}