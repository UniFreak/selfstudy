#include <stdio.h>

#define PI 3.14159
#define R1 2 + 3
#define R2 (2 + 3)

int main() {
    printf("%f\n", 2 * PI * R1);
    printf("%f\n", 2 * PI * R2);
}