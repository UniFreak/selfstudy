#include <stdio.h>

int main() {
    char c;
    int x1, x2;

    scanf("%c", &c);
    switch(c) {
        case '+': 
            scanf("%d, %d", &x1, &x2);
            printf("%d+%d=%d\n", x1, x2, x1 + x2);
            break;
        case '-': 
            scanf("%d, %d", &x1, &x2);
            printf("%d-%d=%d\n", x1, x2, x1 - x2);
            break;
        case '*': 
            scanf("%d, %d", &x1, &x2);
            printf("%d*%d=%d\n", x1, x2, x1 * x2);
            break;
        case '/': 
            scanf("%d, %d", &x1, &x2);
            printf("%d/%d=%d\n", x1, x2, x1 / x2);
            break;
        case '%': 
            scanf("%d, %d", &x1, &x2);
            printf("%d%%%d=%d\n", x1, x2, x1 % x2);
            break;
        default:
            printf("input error\n");
    }
}