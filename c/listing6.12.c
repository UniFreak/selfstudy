#include <stdio.h>

int main() {
    char s[10], *p1, *p2 = "1234";
    p1 = p2;
    p2 = "ab";
    printf("%s\n", p2);
    printf("%s\n", p1);

    p1 = "ABCD";
    printf("%s\n", p1);
    printf("%c, %c\n", *(p1 + 1), *(p1 + 3));
}