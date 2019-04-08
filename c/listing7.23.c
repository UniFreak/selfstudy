#include <stdlib.h>
#include <stdio.h>

int main() {
    int n, c = 0, i = 0;

    srand(0);
    while (i <= 100) {
        n = rand();
        if (200 <= n && n <= 299) {
            c++;
        }
        i++;
    }

    printf("total=%d\n", c);
}