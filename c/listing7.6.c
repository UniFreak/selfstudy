#include <stdio.h>

void change(char c1, char c2) {
    char c;
    c = c1;
    c1 = c2;
    c2 = c;
    return;
}

int main()
{
    char c1 = 'A', c2 = 'B';
    change(c1, c2);
    printf("%c, %c\n", c1, c2);
}