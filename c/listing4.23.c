#include <stdio.h>

int main() {
    float x1, x2, x3;
    char c;
    scanf("%c", &c);
    if (c == '+') {
        scanf("%f, %f, %f", &x1, &x2, &x3);
        printf("%f+%f+%f=%f\n", x1, x2, x3, x1 + x2 + x3);
    } else {
        scanf("%f, %f", &x1, &x2);
        printf("%f-%f=%f\n", x1, x2, x1 - x2);
    }
}