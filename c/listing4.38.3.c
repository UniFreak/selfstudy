#include <stdio.h>

int main() {
    long sum = 0, i;
    for (i = 1; i < 101; i++) sum += i;
    printf("1+2+...+100=%ld\n", sum);
}