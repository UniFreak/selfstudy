#include <stdio.h>

float p(long n) {
    if (n == 1L || n == 2L) {
        return 1;
    } else {
        return p(n - 1) + p(n - 2);
    }
}

int main() {
    printf("p(6) = %f\n", p(6));
}