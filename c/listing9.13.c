#include <stdlib.h>
#include <stdio.h>

int main() {
    FILE *fp;
    int i, d[5];

    if ((fp = fopen("listing9.12.dat", "r")) == NULL) {
        printf("can not open file to read");
        exit(0);
    }

    fread(d, sizeof(int), 5, fp);
    fclose(fp);

    for (i = 0; i < 5; i++) {
        printf("%d  ", d[i]);
    }
    printf("\n");
}