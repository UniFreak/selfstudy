#include <stdio.h>
#include <string.h>

struct student {
    long number;
    char name[10];
    char sex;
    float score[3];
};

int main() {
    struct student x;
    x.number = 100001L;
    strcpy(x.name, "zhao1");
    x.sex = 'f';
    x.score[0] = 89;
    x.score[1] = 94;
    x.score[2] = 86;

    printf("number = %ld, name = %s, sex = %c\n", x.number, x.name, x.sex);
    printf("score1 = %f, score2 = %f, score3 = %f\n", x.score[0], x.score[1], x.score[2]);
}