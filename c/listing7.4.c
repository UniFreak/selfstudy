#include <stdio.h>

int main() {
    void change(int b[], int n);
    int a[10], i;
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    change(a, 10);
    for (i = 0; i < 10; i++) {
        printf("%d  ", a[i]);
    }
    printf("\n");
}

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