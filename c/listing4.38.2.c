#include <stdio.h>

int main() {
    long sum = 0, i;
    i = 1;
    do sum += i++;
    while (i < 101);
    printf("1+2+...+100=%ld\n", sum);
}