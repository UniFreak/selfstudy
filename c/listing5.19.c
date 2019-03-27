#include <stdio.h>

int main() {
    char s1[25];
    scanf("%s", s1);
    printf("%s\n", s1);

    char s2[25] = {"12345"};
    printf("%s\n", s2);

    char s3[25] = {'1', '2', '\0', '3', '4', '5'};
    printf("%s\n", s3);
}