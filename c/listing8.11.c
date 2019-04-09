#include <stdio.h>

struct student2 {
    long number;
    char name[10];
};

int main() {
    struct student2 x;
    long *p_number;
    char *p_name;
    p_number = &x.number;
    p_name = x.name;
    *p_number = 100001L;
    p_name = "zhao1";

    printf("number=%ld, name=%s\n", *p_number, p_name);
}