#include <stdio.h>

int main() {
    int n, i, k, x, min, min_k, a[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (k = 0; k < n-1; k++) {
        min = a[k];
        min_k = k;
        for (i = k + 1; i < n; i++) {
            if (a[i] < min) {
                min = a[i];
                min_k = i;
            }
        }
        x = a[min_k];
        a[min_k] = a[k];
        a[k] = x;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}