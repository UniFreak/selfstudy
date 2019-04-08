#include <string.h>
#include <stdio.h>

char *max_c(char *s) {
    char *max = s;
    while (*s++ != '\0') {
        if (*s > *max) {
            max = s;
        }
    }
    return max;
}

int main() {
    char s[80];
    gets(s);
    puts(s);
    printf("max_c(%s)=%c\n", s, *max_c(s));
}