#include <stdio.h>

int main() {
    int i, j, k;
    for (i = 1; i < 101; i++) {
        for (j = 1; j < 101; j++) {
            for (k = 1; k < 101; k++) {
                if (i * i + j * j == k * k) {
                    printf("i=%d, j=%d, k=%d\n", i, j, k);
                }
            }
        }
    }
}