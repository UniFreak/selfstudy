#include <stdio.h>

struct student {
    int no;
    char xm[10];
    int score[3], zf;
} stu[5];

int main() {
    int n, k;
    for (n = 0; n < 5; n++) {
        printf("input %d student info:", n+1);
        scanf("%d", &stu[n].no);
        scanf("%s", stu[n].xm);
        stu[n].zf = 0;
        for (k = 0; k < 3; k++) {
            scanf("%d", &stu[n].score[k]);
            stu[n].zf += stu[n].score[k];
        }
    }

    printf("result is:\n");
    for (n = 0; n < 5; n++) {
        printf("%d, %s, %d, %d, %d, %d\n", stu[n].no, stu[n].xm, stu[n].score[0], stu[n].score[1], stu[n].score[2], stu[n].zf);
    }
}