#include <stdio.h>

int main() {
    char c1, c2, c3 = 'X';

    c1 = getchar();
    c2 = getchar();
    putchar(c1);
    putchar(c2);
    putchar(c3);
    putchar(c3 + 1);
    putchar('\n');
}