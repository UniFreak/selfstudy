#define N 4

#include <stdio.h>

struct student {
    long number;
    char name[10];
    int age;
} s[N];

void ins(struct student *ps) {
    struct student *q;
    for (q = ps; q < ps + N; q++) {
        scanf("%ld%s%d", &q->number, q->name, &q->age);
    }
    return;
}

int main() {
    struct student ss[N], *ps = ss;
    ins(ps);

    for (ps = ss; ps < ss + N; ps++) {
        printf("%ld,    %s,     %d\n", ps->number, ps->name, ps->age);
    }
}