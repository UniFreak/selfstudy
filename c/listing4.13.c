#include <stdio.h>

int main() {
    unsigned short i, j, x1, x2, x3;
    scanf("%u, %u", &i, &j);
    x1 = i & j;
    x2 = i | j;
    x3 = i ^ j;
    printf("i = %x, j = %x\n", i, j);
    printf("i & j = %x\n", x1);
    printf("i | j = %x\n", x2);
    printf("i ^ j = %x\n", x3);
}