#include <stdio.h>

long p(long i) {
    long r = 1;
    while (i > 1) {
        r *= i;
        i--;
    }
    return r;
}

long h(long n) {
    long r = 0;
    while (n > 0) {
        r += p(n);
        n--;
    }
    return r;
}

float g(long x, long y) {
    return h(x) / h(y);
}

int main() {
    long x1, y1;
    scanf("%ld, %ld", &x1, &y1);
    printf("p(%ld) = %ld, h(%ld) = %ld\n", x1, p(x1), x1, h(x1));
    printf("p(%ld) = %ld, h(%ld) = %ld\n", y1, p(y1), y1, h(y1));
    printf("g(%ld, %ld) = %f\n", x1, y1, g(x1, y1));
}