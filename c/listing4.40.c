#include <stdio.h>

int main() {
    short x, k, s = 0;
    scanf("%d", &x);
    while (x != 0) {
        k = x % 10;
        s += k*k;
        x /= 10;
    }
    printf("s = %d\n", s);
}