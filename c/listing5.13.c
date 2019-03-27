#include <stdio.h>

int main() {
    float a[3][6], x, ave = 0.0;
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 6; j++) {
            scanf("%f", &x);
            a[i][j] = x;
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 6; j++) {
            ave += a[i][j];
        }
    }
    ave = ave / (3 * 6);

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 6; j++) {
            a[i][j] = a[i][j] / ave;
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 6; j++) {
            printf("%8.2f", a[i][j]);
        }
        printf("\n");
    }
}