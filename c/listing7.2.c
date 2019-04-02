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
    int a[8] = {1, 2, 3, 8, 5, 9, 10}, i;

    printf("before: ");
    for (i = 0; i < 8; i++) {
        printf("%d ", a[i]);
    }

    change(a, 5);
    printf("\nafter:");
    for (i = 0; i < 8; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}