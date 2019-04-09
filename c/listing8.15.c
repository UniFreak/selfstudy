#include <stdio.h>
#include <string.h>

struct student {
    long number;
    char name[10];
};

int main() {
    struct student s, *p = &s;
    p->number = 100001L;
    strcpy((*p).name, "zhao1");
    printf("number=%ld\n", (*p).number);
    printf("name=%s\n", p->name);
}