#include <stdio.h>

char *cat(char *s1, char *s2) {
    static char r[160], *p;
    p = r;

    while (*s1 != '\0') {
        *p++ = *s1++;
    }
    while (*s2 != '\0') {
        *p++ = *s2++;
    }
    *p = *s2;
    return r;
}

int main() {
    char *s1 = "hello", *s2 = "world";
    printf("cat of `hello` `world` is: %s\n", cat(s1, s2));
}