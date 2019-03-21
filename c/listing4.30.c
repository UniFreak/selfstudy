#include <stdio.h>

int main() {
    int n = -1;
    char c;

    do n++;
    while ((c = getchar() != '\n'));

    printf("number of chars = %d\n", n);
}