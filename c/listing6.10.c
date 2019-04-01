#include <stdio.h>

int main() {
    int a[10], *p = a, x, n, found = 0;
    for (p = a; p < a + 10; p++) {
        scanf("%d", p);
    }
    scanf("%d", &x);

    for (n = 1, p = a; p < a + 10; p++, n++) {
        if (*p == x) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("found %d at position %d\n", x, n);
    } else {
        printf("not found!\n");
    }
}