#include <stdio.h>

int main() {
    int n;
    short s;
    unsigned long u3;
    float f;
    char c;

    printf("%d, %d, %d, %d, %d\n", sizeof(n), sizeof(long), sizeof(unsigned long), sizeof(f), sizeof(c));
}