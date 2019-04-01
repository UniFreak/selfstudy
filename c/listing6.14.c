#include <stdio.h>
#include <string.h>

int main() {
    char *s1 = "12345678", s[10], *s2 = s;
    gets(s2);
    while (strcmp(s1, s2) != 0) {
        if (strcmp(s1, s2) > 0) {
            printf("too small!\n");
        } else {
            printf("too large!\n");
        }
        gets(s2);
    }
}