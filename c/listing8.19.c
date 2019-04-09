#define N 5

#include <stdio.h>

struct student {
    long number;
    char name[10];
    int age;
};

struct student ins() {
    struct student s;
    scanf("%ld", &s.number);
    scanf("%s", s.name);
    scanf("%d", &s.age);
    return s;
}   

int main() {
    struct student ss[N];
    int i;
    for (i = 0; i < N; i++) {
        ss[i] = ins();
    }

    for (i = 0; i < N; i++) {
        printf("%11ld, %11s, %11d\n", ss[i].number, ss[i].name, ss[i].age);
    }
}