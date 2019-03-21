#include <stdio.h>
#include <math.h>

int main() {
    float sum, psum, x;
    int i;
    for (sum = psum = 0.0, i = 0; i < 10; i++) {
        scanf("%f", &x);
        if (fabs(x) < 1e-5) break;
        sum += x;
        if (x < 0) continue;
        psum += x;
    }

    printf("sum = %f, psum = %f\n", sum, psum);
}