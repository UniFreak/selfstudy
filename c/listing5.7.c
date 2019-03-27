#include <stdio.h>

int main() {
    int k, min_k;
    float min, x[10];
    for (k = 0; k < 10; k++) {
        scanf("%f", &x[k]);
    }
    min = x[0], min_k = 0;
    for (k = 1; k < 10; k++) {
        if (min > x[k]) {
            min = x[k], min_k = k;
        }
    }
    printf("No %d:%f\n", min_k + 1, min);
}