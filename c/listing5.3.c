#include <stdio.h>

int main() {
    short y[2];
    y[2] = 10;
    scanf("%hd", &y[3]);
    y[1] = y[4];
}