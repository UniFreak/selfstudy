#include <stdio.h>

int main() {
    char s[4][100];
    gets(s[0]);
    gets(s[1]);
    scanf("%s%s", s[2], s[3]);
    printf("%s\n%s\n%s\n%s\n", s[0], s[1], s[2], s[3]);
}