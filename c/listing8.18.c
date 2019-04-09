#define N 4

#include <stdio.h>

struct student {
    long number;
    char name[10];
    int age;
} s[N];

void ins() {
    int i;
    for (i = 0; i < N; i++) {
        scanf("%ld%s%d", &s[i].number, s[i].name, &s[i].age);
    }
}

int main() {
    int i;
    ins();
    for (i = 0; i < N; i++) {
        printf("%ld,    %s,     %d\n", s[i].number, s[i].name, s[i].age);
    }
}