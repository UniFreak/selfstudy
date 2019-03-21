#include <stdio.h>

int main() {
    int x, max, min;
    scanf("%d", &x);
    max = min = x;
    for (; x!= 0;) {
        if (x < min) min = x;
        if (x > max) max = x;
        scanf("%d", &x);
    }

    printf("max = %d, min = %d\n", max, min);
}