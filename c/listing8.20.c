#define N 4

#include <stdio.h>

struct student {
    long number;
    char name[10];
    int age;
} s[N];

void ins(struct student ss[]) {
    int i;
    for (i = 0; i < N; i++) {
        scanf("%ld%s%d", &ss[i].number, ss[i].name, &ss[i].age);
    }
    return;
}

int main() {
    struct student ss[N];
    ins(ss);

    int i;
    for (i = 0; i < N; i++) {
        printf("%ld,    %s,     %d\n", ss[i].number, ss[i].name, ss[i].age);
    }
}