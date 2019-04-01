#include <stdio.h>

int main() {
    char s[10] = "string", *ps = s;

    scanf("%c", &ps[0]);
    printf("%c", ps[0]);
    printf("\n");
}