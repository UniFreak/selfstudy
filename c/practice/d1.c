#include <stdio.h>

int main() {
    char ch;
    int sum = 0;
    for (;;) {
        ch = getchar();
        if (ch == '\n') {
            break;
        }
        if (ch >= 'A' && ch <= 'Z') {
            sum++;
        }
    }
    printf("sum=%d\n", sum);
}