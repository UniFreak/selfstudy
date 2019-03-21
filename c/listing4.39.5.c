#include <stdio.h>

int main() {
    long sum, i;
    for (sum = 0, i = 1; i < 101; i++) sum += i;
    printf("1+2+...+100=%ld\n", sum);
}