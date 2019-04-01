#include <stdio.h>

int main() {
    short a[10], *p1 = &a[2], *p2 = &a[3];
    printf("%d\n", p1 < p2);
    printf("%d\n", p1++==p2);
    printf("%d\n", --p2==p1);
    printf("%d\n", p1 < a);
    printf("%d\n", p1 < &a[9]);
    printf("%d\n", p2 <= a+3);
}