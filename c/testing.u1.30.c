#include <stdio.h>

int main() {
    int i, m;
    for (i = 1; i < 100; i++) {
        m = i * 10 + 5;
        if (m % 7) {
            continue;
        }
        printf("%d\n", m);
    }
}