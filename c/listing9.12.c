#include <stdlib.h>
#include <stdio.h>

int main() {
    FILE *fp;
    int i, d[5];

    if ((fp = fopen("listing9.12.dat", "w")) == NULL) {
        printf("can not open file to write");
        exit(0);
    }

    for (i = 0; i < 5; i++) {
        scanf("%d", &d[i]);
    }

    fwrite(d, 10, sizeof(int), fp);
    fclose(fp);
}