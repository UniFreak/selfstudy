#include <stdio.h>

int max3(int x1, int x2, int x3) {
    int max;
    if (x1 > x2) {
        max = x1;
    } else {
        max = x2;
    }

    if (x3 > max) {
        max = x3;
    }
    return max;
}

int main() {
    printf("max of 2,3,-1 is %d\n", max3(2, 3, -1));
}