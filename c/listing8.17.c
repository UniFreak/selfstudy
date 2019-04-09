#include <string.h>
#include <stdio.h>

struct student {
    long number;
    char name[10];
};

int main() {
    struct student s[2], *p = s;
    p->number = 100001L;
    strcpy((*p).name, "sun3");
    (*(p+1)).number = 200001L;
    strcpy((p+1)->name, "sun4");

    printf("%ld, %s\n", (*p).number, p->name);
    printf("%ld, %s\n", (p+1)->number, (*(p+1)).name);
}