#include <stdio.h>
#include <string.h>

int main() {
    char a[40], b[80];
    gets(a);
    strcpy(b, a);
    strcat(b, a);
    if (strcmp(a, b) < 0) {
        printf("a < b\n");
    } else if (strcmp(a, b) > 0) {
        printf("a > b\n");
    } else {
        printf("a = b\n");
    }

    printf("length of a(%s) = %lu\n", a, strlen(a));
    printf("length of b(%s) = %lengthu\n", b, strlen(b));

    puts(a);
    puts(b);
}