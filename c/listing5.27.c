#include <stdio.h>
#include <string.h>

int main() {
    char a[80], b[80], c[80];
    int i;
    gets(a);

    i = 0;
    while (a[i] != '\0') {
        b[i] = a[i] + 3;
        i++;
    }
    b[i] = '\0';

    for (i = 0; b[i] != '\0'; i++) {
        c[i] = b[i] - 3;
    }
    c[i] = '\0';

    puts(a);
    puts(b);
    puts(c);
}