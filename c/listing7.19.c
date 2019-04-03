#include <stdio.h>

char *max_char(char a[], int n) {
    int i;
    char max_c, *p;
    max_c = a[0], p = a;
    for (i = 0; i < n; i++) {
        if (max_c < a[i]) {
            max_c = a[i];
            p = &a[i];
        }
    }
    return p;
}

int main() {
    char *str = "helloworld";
    printf("max char in whole is: %c\n", *max_char(str, 10));
    printf("max char in half is: %c\n", *max_char(str, 10 / 2));
}