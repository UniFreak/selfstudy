#include <stdio.h>
#include <string.h>

int main() {
    char s[81], maxc, minc;
    int i, n;

    gets(s);
    n = strlen(s);
    maxc = minc = s[0];
    for (i = 1; i < n; i++) {
        if (maxc < s[i]) maxc = s[i];
        if (minc > s[i]) minc = s[i];
    }
    printf("maxc = %c, minc = %c, %c - %c = %d\n", maxc, minc, maxc, minc, maxc-minc);
}