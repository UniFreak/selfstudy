#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int i;
    scanf("%s", s1);
    while (s1[i] != '\0') {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    printf("s1 = %s, s2 = %s\n", s1, s2);
}