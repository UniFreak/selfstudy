#include <stdio.h>
#include <string.h>

int main() {
    char a[81], b[81], c[81], d[81];
    gets(a);
    gets(b);
    gets(c);

    if (strcmp(a, b) > 0) {
        strcpy(d, a);
    } else {
        strcpy(d, b);
    }

    if (strcmp(c, d) > 0) {
        strcpy(d, c);
    }

    puts(d);
}