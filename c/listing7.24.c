#include <stdio.h>

void f(int *p1, int *p2, int *p3) {
    *p1 = 10, *p2 = 20, *p3 = 30;
    p1 = p2 = p3;
    printf("%d, %d, %d\n", *p1, *p2, *p3);
}

int main() {
    int x = 1, y = 2, z = 3, *px = &x, *py = &y, *pz = &z;
    f(px, py, pz);
    printf("%d, %d, %d\n", x, y, z);
    printf("%d, %d, %d\n", *px, *py, *pz);
}