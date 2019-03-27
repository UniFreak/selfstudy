#include <stdio.h>

int main() {
    short x[4];
    x[0] = 10;
    scanf("%hd, %hd", &x[1], &x[3]);
    x[1] = 2 * x[0] + x[1] - x[3];
}