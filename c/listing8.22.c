#define N 4

#include <stdio.h>

struct student {
    long number;
    char name[10];
    int age;
} s[N];

void outs(struct student s) {
    printf("%11ld, %11s, %11d\n", s.number, s.name, s.age);
}

int main() {
    struct student s;
    scanf("%ld%s%d", &s.number, s.name, &s.age);
    outs(s);
}