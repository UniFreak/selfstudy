#include <stdio.h>

int main() {
    int n = 0;
    char c;

    while ((c = getchar()) != '\n') {
        if (c == ' ') break;
        n++;
    }
    printf("number of chars = %d\n", n);
}