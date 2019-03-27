#include <stdio.h>

int main() {
    int n, i, j, k, x, a[100];
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    for (k = 1; k < n; k++) {
        for (j = n; j >= k+1; j--) {
            if (a[j] < a[j-1]) {
                x = a[j];
                a[j] = a[j-1];
                a[j-1] = x;
            }
        }
    }

    for (i = 1; i <= n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}