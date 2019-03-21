#include <stdio.h>

int main() {
    int n, i, flag;
    scanf("%d", &n);
    while (n != 0) {
        flag = 1;
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                flag = 0; 
                break;
            }
        }

        if (flag == 1) {
            printf("yes!\n");
        } else {
            printf("no!\n");
        }
        scanf("%d", &n);
    }
}