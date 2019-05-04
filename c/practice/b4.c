#include <stdio.h>

int main() {
    float scores[10], min, max, sum = 0;
    int i;

    printf("enter 10 score:");
    for (i = 0; i < 10; i++) {
        scanf("%f", &scores[i]);
    }

    min = scores[0];
    max = scores[0];
    for (i = 0; i < 10; i++) {
        sum += scores[i];
        if (scores[i] < min) {
            min = scores[i];
        }
        if (scores[i] > max) {
            max = scores[i];
        }
    }

    printf("min = %f, max = %f, avg = %f\n", min, max, sum / 10);
}