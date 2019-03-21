#include <stdio.h>

int main() {
    int x, m;
    scanf("%d", &x);
    if (x < 0) x = -x;
    if (x < 10) m = 1;
    else if (x < 100) m = 2;
    else if (x < 1000) m = 3;
    else if (x < 10000) m = 4;
    else m = 5;

    printf("m = %d\n", m);
}