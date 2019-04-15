#include <stdio.h>

int main() {
    int a[3][4] = {1,3,5,7,12,14,16,18,9,6,4,2}, j, k, m, n, x;
    x = m = n = 0;
    for (j = 2; j > -1; j--) 
        for (k = 0; k < 4; k++) 
            if (x < a[j][k])
                x = a[j][k], m = j, n = k;
            printf("a[%d][%d]=%d\n", m, n, x);
}