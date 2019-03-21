#include <stdio.h>

int main() {
    int n, k, k1, m, i;
    scanf("%d", &n);
    while (n != 0) {
        k1 = 1;
        do {
            k = k1;
            m = 0;
            for (i = 1; i <= n; i++) {
                m = m + k;
                k = k + 2;
            }
            if (m == n * n * n) break;
            else k1 = k1 + 2;
        } while (1);

        for (i = 1; i <= n; i++) {
            printf("%d ", k1);
            k1 += 2;
        }
        printf("\n");
        scanf("%d", &n);
    }

}