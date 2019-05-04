// bubble sort
#include <stdio.h>

int main() {
    int a[11];
    int i, j, t;

    printf("enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    printf("\n");

    for (j = 0; j < 10; j++) {
        for (i = 0; i < 10 - j; i++) {
            if (a[i] > a[i+1]) {
                t = a[i];
                a[i] = a[i+1];
                a[i+1] = t;
            }
        }
    }

    printf("the sorted numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}