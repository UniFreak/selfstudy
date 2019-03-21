#include <stdio.h>

int main() {
    int i;
    double x = 0.5, sum = 0.0;
    for (i = 1; i < 65; i++) {
        x = 2 * x;
        sum += x;
    }
    printf("sum = %f\n", sum);
}