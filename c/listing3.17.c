#include <stdio.h>

int main() {
    int a = 3, b = 3;
    char c1 = 'b', c2 = 'B';

    printf("%d, %d, %c, %c\n", ++a - 1, b-- + 1, ++c1 - 1, c2-- + 1);
    printf("%d, %d, %c, %c\n", a, b, c1, c2);
}