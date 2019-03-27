#include <stdio.h>

int main() {
    char s1[80], s2[80];
    scanf("%s", s1);
    scanf("%s", s2);
    printf("got a=%s, b=%s\n", s1, s2);

    char greater = 'e';
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] > s2[i] || s2[i] == '\0') {
            greater = 'a';
            break;
        }
        if (s1[i] < s2[i] || s1[i] == '\0') {
            greater = 'b';
            break;
        }
        i++;
    }

    printf("greater is %c\n", greater);
}