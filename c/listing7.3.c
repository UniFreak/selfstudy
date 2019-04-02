#include <stdio.h>

int max3(int x1, int x2, int x3) {
    int max;
    if (x1 > x2) {
        max = x1;
    } else {
        max = x2;
    }

    if (x3 > max) {
        max = x3;
    }
    return max;
}

int main() {
    int x, y, z, w, m;
    scanf("%d, %d, %d, %d", &x, &y, &z, &w);
    m = max3(x-y, y-z, z-w);
    printf("%max = %d\n", m);
}