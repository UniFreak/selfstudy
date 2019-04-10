#include <stdlib.h>
#include <stdio.h>

int main() {
    FILE *fp;
    int d, i;

    if ((fp = fopen("listing9.17.dat","rb")) == NULL) {
        printf("can not open file");
        exit(0);
    }

    for (i = 0; i < 3; i++) {
        fseek(fp, (long) (sizeof(int) * i * 2), 0);
        fread(&d, sizeof(int), 1, fp);
        printf("No.%d:%d\n", i*2+1, d);
    }

    fseek(fp, (long) (sizeof(int) * -3), 2);
    fread(&d, sizeof(int), 1, fp);
    printf("No.8:%d\n", d);

    fseek(fp, (long) (sizeof(int) * -1), 2);
    fread(&d, sizeof(int), 1, fp);
    printf("No.10:%d\n", d);

    fclose(fp);
}