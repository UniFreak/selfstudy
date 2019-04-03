#include <stdio.h>

float max, min, avg;
void f(float a[]) {
    float sum = 0;
    int i;
    max = min = a[0];
    avg = 0;
    for (i = 1; i < 10; i++) {
        if (a[i] > max) {
            max = a[i];
        } else {
            min = a[i];
        }
        sum += a[i];
    }
    avg = sum / 10;
    return;
}

int main() {
    float a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    f(a);
    printf("max: %f, min: %f, avg: %f\n", max, min, avg);
}