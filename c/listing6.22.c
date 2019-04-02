#include <stdio.h>

int main() {
    int n[10], c[10] = {0}, *p, max;

    for (p = n; p < n+10; p++) {
        scanf("%d", p);
    }

    for (p = n; p < n+10; p++) {
        c[*p]++;
    }

    p = c;
    max = *p;
    while (p < c+10) {
        if (max < *p) {
            max = *p;
        }
        p++;
    }
    printf("count max is %ld for %d times\n", p - c - 1, max);
}
