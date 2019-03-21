#include <stdio.h>

int main() {
    long sum = 0, i = 1;
    for (; i < 101; i++) sum += i;
    printf("1+2+...+100=%ld\n", sum);
}