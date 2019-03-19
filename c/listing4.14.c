#include <stdio.h>
#include <math.h>

int main() {
    char c1, c2, c3, c4;
    int x;
    scanf("%d", &x);

    c4 = (x> 0 ? '+' : '-');
    x = abs(x);
    c3 = x % 10 + 48;
    x = x / 10;
    c2 = x % 10 + 48;
    c1 = x / 10 + 48;

    printf("%c %c %c %c\n", c4, c1, c2, c3);
}