// output all prime number
#include <stdio.h>

int main() { 
    int n, m, k;
    scanf("%d", &n);
    if (n > 0) { 
        for(m = 2; m <= n; m++) {
            for (k = 2; k < m; k++) {
                if (m % k == 0) {
                    break;
                } 
            }
            if (m == k) {
                printf("%d,  ", m);    
            }
        }
        printf("\n");
    } else {
        printf("Error!");
    }
}