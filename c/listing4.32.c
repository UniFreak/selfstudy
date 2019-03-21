#include <stdio.h>

int main() {
    int i;
    float f, sum = 0;
    for (i = 1; i < 11; i++) {
        scanf("%f", &f);
        sum += f;
    }
    printf("average = %f\n", sum / 10);
}