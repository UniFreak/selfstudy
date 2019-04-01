#include <stdio.h>

int main() {
    float f[10], *p, x, *p_min;
    for (p = f; p < f + 10; p++) {
        scanf("%f", p);
    }

    for (p_min = p = f; p < f + 10; p++) {
        if (*p < *p_min) {
            p_min = p;
        }
    }
    x = *f; *f = *p_min; *p_min = x;
    for (p = f; p < f + 10; p++) {
        printf("%8.2f", *p);
    }
    printf("\n");
}