#include <stdio.h>

int main() {
    float f[20], x, *pb, *pe;
    int n, i;
    printf("input n:");
    scanf("%d", &n);

    for (pb = f; pb < f + n; pb++) {
        scanf("%f", pb);
    }

    for (i = 0, pb = f, pe = f+n-1; i < n / 2; i++, pb++, pe--) {
        x = *pb;
        *pb = *pe;
        *pe = x;
    }
    for (pb = f; pb < f + n; pb++)  {
        printf("%f ", *pb);
    }
    printf("\n");
}
