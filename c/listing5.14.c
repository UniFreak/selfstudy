#include <stdio.h>

int main() {
    int s[10][5], i, max, max_i;
    for (i = 0; i < 10; i++) {
        printf("input student No, score1, score2, score3:\n");
        scanf("%d, %d, %d, %d", &s[i][0], &s[i][1], &s[i][2], &s[i][3]);
    }
    for (i = 0; i < 10; i++) {
        s[i][4] = s[i][1] + s[i][2] + s[i][3];
    }
    max = s[0][4], max_i = 0;
    for (i = 1; i < 10; i++) {
        if (max < s[i][4]) {
            max = s[i][4];
            max_i = i;
        }
    }
    printf("student No=%d, total=%d\n", s[max_i][0], s[max_i][4]);
}