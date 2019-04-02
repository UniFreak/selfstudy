#include <stdio.h>

int main() {
    char s[80], *p;
    int n;

    scanf("%s", s);
    scanf("%d", &n);
    for (p = s+n-1; *p != '\0'; p++) {
        *p = *(p+1);
    }

    for (p = s; *p != '\0'; p++) {
        printf("%c", *p);
    }
    printf("\n");
}
