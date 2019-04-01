#include <stdio.h>

int main() {
    char s[100], *ps = s;
    scanf("%s", ps);

    int n = 0;
    while (*(ps+n) != '\0') {
        n++;
    }
    printf("length of %s is %d\n", ps, n);
}