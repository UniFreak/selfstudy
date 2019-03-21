#include <stdio.h>

int main() {
    long sum = 0, i;
    i = 1;
    while (i < 101) sum += i++;
    printf("1+2+...+100=%ld\n", sum);
}