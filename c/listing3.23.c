#include <stdio.h>

int main() {
    char c1 = 'a', c2 = 'A';
    int n1 = 65, n2 = 97;
    float f1 = 3.0, f2 = 3.0001;

    printf("%d, %d, %d, %d, %d, %d, %d\n", !c1, n1 && n2, f1 || f2, !(c2 > c1), (!c2) > c1, f1 > f2 || !c1, n1 + 32 == n2 && n1 == c2);
}