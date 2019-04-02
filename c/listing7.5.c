#include <stdio.h>

int fac(int n) {
    int r = 1, i = 1;
    while (++i <= n) {
        r *= i;
    }
    return r;
}

int main()
{
    int i;
    for (i = 2; i <= 10; i++) {
        printf("factory of %d is %d\n", i, fac(i));
    }
}