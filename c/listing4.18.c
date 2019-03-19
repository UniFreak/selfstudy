#include <stdio.h>

int main() {
    int y;
    float x;
    scanf("%f", &x);
    if (x < -1.0) {
        y = 0;
    } else {
        if (x <= 1.0) {
            y = 1;
        } else {
            y = 10;
        }
    }
    printf("y = %d\n", y);
}