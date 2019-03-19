#include <stdio.h>

int main() {
    unsigned short a = 01111, b = 0x53;

    printf("%o, %o, %o, %o\n", ~a, a&b, a|b, a^b);
}