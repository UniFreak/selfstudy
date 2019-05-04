// @???
#include <stdio.h>

int main() {
    long int x0, x1, xc;
    int i, n;
    scanf("%d", &n);
    x0 = 0;
    x1 = 1;
    for (i = 2; i < n; i++) {
        xc = x1 + 4 * x0;
        x0 = x1;
        x1 = xc;
    }
    printf("result is %ld\n", xc);
}