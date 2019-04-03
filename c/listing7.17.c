#include <stdio.h>

long p(long n) {
    static long k = 1L;
    k = n * k;
    return k;
}

int main() {
    long n, i, pn;
    scanf("%ld", &n);
    for (i = 1L; i <= n; i++) {
        pn = p(i);
    }
    printf("%ld! = %ld\n", n, pn);
}