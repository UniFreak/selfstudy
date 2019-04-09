#define N 2
#define M 3

#include <stdio.h>

struct student {
    long number;
    char name[10];
    int age;
    float score[M];
    float total;
    float avg;
};

int main() {
    struct student ss[N];
    int i, j;

    for (i = 0; i < N; i++) {
        scanf("%ld", &ss[i].number);
        scanf("%s", ss[i].name);
        scanf("%d", &ss[i].age);
        for (j = 0; j < M; j++) {
            scanf("%f", &(ss[i].score[j]));
        }
    }

    for (i = 0; i < N; i++) {
        ss[i].total = 0;
        for (j = 0; j < M; j++) {
            ss[i].total += ss[i].score[j];
        }
        ss[i].avg = ss[i].total / M;
    }

    printf("number  name    total   avg\n");
    for (i = 0; i < N; i++) {
        printf("%-8ld%-12s%11.2f%11.2f\n", ss[i].number, ss[i].name, ss[i].total, ss[i].avg);
    }
}