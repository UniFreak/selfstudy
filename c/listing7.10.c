#include <stdio.h>

int len(char *s) {
    int l = 0;
    while (*s++ != '\0') {
        l++;
    }
    return l;
}

int main()
{
    char c1[] = "ABCD", c2[] = "someString";
    printf("len of c1: %d, len of c2: %d\n", len(c1), len(c2));
}