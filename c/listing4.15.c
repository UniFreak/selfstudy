#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        printf("YES\n");
    }
}