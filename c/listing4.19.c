#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    if ('0' <= c && c <= '9') printf("c = %c %c\n", c, '1');
    else if ('A' <= c && c <= 'Z') printf("c = %c %c\n", c, '2');
    else if ('a' <= c && c <= 'z') printf("c = %c %c\n", c, '3');
    else if (c == ' ') printf("c = %c %c\n", c, '4');
    else if (c == '\n') printf("c = %c %c\n", c, '5');
    else printf("c = %c %c\n", c, '6');
}