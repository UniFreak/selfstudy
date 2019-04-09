#include <stdio.h>
#include <string.h>

struct student {
    long number;
    char name[10];
} s[4];

int main() {
    s[0].number = 100001L;
    strcpy(s[1].name, "sun3");
    printf("%ld, %s\n", s[0].number, s[1].name);
}