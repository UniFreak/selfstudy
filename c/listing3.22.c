#include <stdio.h>

int main() {
    int n1 = 1, n2 = 2, n3 = 3;

    printf("%d, %d, %d, %d\n", n1 < n2 < 1.9, n1 < n2 < n1 < n2, n1 < n2 <= n3 != n1 == n1, n1 == n2 != n3 > n2 >= n1);
}