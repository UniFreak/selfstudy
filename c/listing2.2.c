#include <stdio.h>

float avg(float x, float y, float z) {
    float r;
    r = (x + y + z) / 3;
    return r;
}

int main() {
    float x1, y1, z1, a;
    scanf("%f, %f, %f", &x1, &y1, &z1);
    a = avg(x1, y1, z1);
    printf("%f\n", a);
}