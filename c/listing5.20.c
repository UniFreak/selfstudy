#include <stdio.h>

int main() {
    char a[80];
    int n = 0, i = 0;
    scanf("%s", a);
    while (a[i++] != '\0') {
        n++;
    }
    printf("length of %s = %d\n", a, n);
}