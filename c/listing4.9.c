#include <stdio.h>

int main() {
    char ch;
    int yn;

    scanf("%c", &ch);
    yn = (((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')));
    printf("yn = %d\n", yn);
}