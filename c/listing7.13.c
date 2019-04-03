#include <stdio.h>

int a = 1, b = 2;
void f() {
    int a = 3;
    printf("a = %d, b = %d", a, b);
}

int main() {
    int b = 4;
    f();
    printf("    a = %d, b = %d\n", a, b);
}