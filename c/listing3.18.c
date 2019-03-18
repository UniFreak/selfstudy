#include <stdio.h>

int main() {
    int a = 3, b = 3;

    int c, d;
    printf("%d, %d\n", (a++) + (a++), (b--) - (b--));
    printf("%d, %d\n", a, b);
}