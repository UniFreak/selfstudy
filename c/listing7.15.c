#include <stdio.h>

float p(long n) {
    if (n == 1L) {
        return 1.0;
    } else {
        return n * (p(n-1));
    }
}

int main() {
    printf("p(5) = %f\n", p(5));
}