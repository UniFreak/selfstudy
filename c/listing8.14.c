#include <stdio.h>
#include <string.h>

struct student {
    long number;
    char name[10];
} s[4];

int main() {
    struct student s[2];
    long *p_number;
    char *p_name;
    p_number = &s[0].number;
    p_name = s[1].name;
    *p_number = 100001L;
    strcpy(p_name, "sun3");
    printf("%ld, %s\n", s[0].number, s[1].name);
}