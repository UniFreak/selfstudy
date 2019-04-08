#include <math.h>
#include <stdio.h>

long f(int n, int k) {
    long r = 0;
    while (n > 0) {
        n--;
        r += k * pow(10, n);
    }
    return r;
}

int main() {
    long s1 = 0, s2 = 0;
    int i;

    for (i = 1; i <= 5; i++) {
        s1 += f(i, 2);
    }
    printf("2 + 22 + 222 + 2222 + 22222 = %ld\n", s1);

    for (i = 1; i <= 6; i++) {
        s2 += f(i, 6);
    }
    printf("6 + 66 + 666 + 6666 + 66666 + 666666 = %ld\n", s2);
}