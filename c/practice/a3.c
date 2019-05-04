// selection sort
#include <stdio.h>

void sort(int array[], int n) {
    int i, j, k, t;
    for (i = 0; i < n; i++) {
        k = i;
        for (j = i+1; j < n; j++) {
            // NOTE: array[k], not array[i]
            if (array[k] > array[j]) {
                k = j;
            }
        }
        t = array[i];
        array[i] = array[k];
        array[k] = t;
    }
}

int main() {
    int a[10], i;
    printf("enter the array\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    sort(a, 10);
    printf("the sorted array is \n");
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}