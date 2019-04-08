#include <ctype.h>
#include <stdio.h>

int main() {
    printf("isalpha(49)=%d\n", isalpha(49));
    printf("isalpha('a')=%d\n", isalpha('a'));
    printf("islower(49)=%d\n", islower(49));
    printf("islower('a')=%d\n", islower('a'));
    printf("isupper(49)=%d\n", isupper(49));
    printf("isupper('a')=%d\n", isupper('a'));
    printf("isdigit(49)=%d\n", isdigit(49));
    printf("isdigit('a')=%d\n", isdigit('a'));
    printf("tolower(49)=%c\n", tolower(49));
    printf("tolower('a')=%c\n", tolower('a'));
    printf("toupper(49)=%c\n", toupper(49));
    printf("toupper('a')=%c\n", toupper('a'));
    printf("toascii(129)=%d\n", toascii(129));
    printf("toascii('a')=%d\n", toascii('a'));
}