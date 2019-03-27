#include <stdio.h>

int main() {
    int n, f[20] = {1, 1};
    for (n = 2; n < 20; n++) {
        f[n] = f[n-1] + f[n-2];
    }
    for (n = 0; n < 20; n++) {
        if (n % 5 == 0) {
            printf("\n");
        }
        printf("%10d", f[n]);
    }
    printf("\n");
}