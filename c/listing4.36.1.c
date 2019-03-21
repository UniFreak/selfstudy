#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i - 1; j++) printf(" ");
        for (j = 1; j <= 2 * i; j++) printf("*");
        printf("\n");
    }
}