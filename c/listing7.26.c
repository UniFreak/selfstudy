#include <math.h>
#include <stdio.h>

float s(int n) {
    if (n == 1) {
        return 1;
    } 
    return s(n - 1) + n * n;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("s(%d)=%f\n", n, s(n));
}