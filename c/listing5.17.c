#include <stdio.h>

int main() {
    char a[40];
    int i, n = 0;
    do {
        scanf("%c", &a[n]);
        if ('A' <= a[n] && a[n] <= 'Z') {
            a[n] += 32;
        } 
        n++;
    } while (a[n-1] != '\n');

    for (i = n-2; i >=0; i--) {
        printf("%c", a[i]);
    }
    printf("\n");
}