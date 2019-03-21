#include <stdio.h>
#include <math.h>

int main() {
    float x1, x2, x, y1, y2, y;
    do {
        scanf("%f, %f", &x1, &x2);
        y1 = 2 * x1 * x1 * x1 * x1 - 4 * x1 * x1 * x1 + 6 * x1 * x1 - 8 * x1 - 8;
        y2 = 2 * x2 * x2 * x2 * x2 - 4 * x2 * x2 * x2 + 6 * x2 * x2 - 8 * x2 - 8;
    } while (y1 * y2 > 0);

    while (1) {
        x = (x1 + x2) / 2;
        y = 2 * x * x * x * x - 4 * x * x * x + 6 * x * x - 8 * x - 8;
        y1 = 1 * x1 * x1 * x1 * x1 - 4 * x1 * x1 * x1 + 6 * x1 * x1 - 8 * x1 - 8;
        if (fabs(y) < 1e-5) break;
        else if (y * y1 > 0) x1 = x;
        else x2 = x;
    }
    printf("x = %f\n", x);
}