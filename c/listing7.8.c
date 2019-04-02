#include <stdio.h>

void change(int a[], int n) {
    int max, max_i, i, t;
    for (max = a[0], i = 0; i < n; i++) {
        if (max < a[i]) {
            max = a[i];
            max_i = i;
        }
    }

    t = a[0];
    a[0] = max;
    a[max_i] = t;
}

int main() {
    int b[10], i, *p = b;
    for (i = 0; i < 10; i++) {
        scanf("%d", &b[i]);
    }
    change(p+2, 3);
    for (i = 0; i < 10; i++) {
        printf("%d  ", b[i]);
    }
}