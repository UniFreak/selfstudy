#include <stdio.h>

int main() {
    int n, k = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    while (n != 0) {
        ++k; 
        n /= 10;
    }
    printf("the result is %d\n", k);
}