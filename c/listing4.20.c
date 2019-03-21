#include <stdio.h>

int main() {
    unsigned short x;
    char c;

    scanf("%d, %c", &x, &c);
    switch(c) {
        case 'D': printf("%dD\n", x);
        break;
        case 'O': printf("%oO\n", x);
        break;
        case 'X': printf("%xX\n", x);
        break;
        default: printf("input error!\n");
    }
}