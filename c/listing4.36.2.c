#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3 - i; j++) printf(" "); 
        for (j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    for (i = 4; i <= 5; i++) {
        for (j = 1; j <= i - 3; j++) printf(" ");
        for (j = 1; j <= 2 * (5 - i) + 1; j++) printf("*");
        printf("\n");
    }
}