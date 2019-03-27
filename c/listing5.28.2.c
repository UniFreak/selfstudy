#include <stdio.h>
#include <string.h>

int main() {
    char s[81], maxc, minc, c;
    int i;

    gets(s);
    maxc = minc = s[0];
    while ((c = s[i++]) != '\0') {
        if (maxc < c) maxc = c;
        if (minc > c) minc = c;
    }
    printf("maxc = %c, minc = %c, %c - %c = %d\n", maxc, minc, maxc, minc, maxc-minc);
}