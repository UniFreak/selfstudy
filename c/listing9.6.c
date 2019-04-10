#include <stdlib.h>
#include <stdio.h>

int main() {
    FILE *fp;
    int i;

    if ((fp = fopen("./listing9.6.txt", "r")) == NULL) {
        printf("can not open file");
        exit(0);
    }

    for (i = 0; i < 10 && !feof(fp); i++) {
        putchar(fgetc(fp));
    }
    fclose(fp);
}