#include <stdio.h>

int main() {
    char ch, yn;
    ch = getchar();
    yn = (ch >= '0' && ch <= '9') ? 'Y' : 'N';
    putchar(yn);
    putchar('\n'); 
}