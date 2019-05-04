// recursive function: calc factory result
#include <stdio.h>

double fac(int n) {
    double f;
    if (n < 0) {
        printf("n < 0, data error!");
    } else if (n != 1) {
        f += n * fac(n - 1); // NOTE
    } else {
        f = 1;
    }
    return f;
}

int main() {
    int n;
    double y ;
    printf("input a integer number:");
    scanf("%d", &n);
    y = fac(n);
    printf("%d! = %15.0f\n", n, y);
}