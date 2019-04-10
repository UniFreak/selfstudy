#include <stdlib.h>
#include <stdio.h>

int main() {
    FILE *fp;
    char c;
    int i;

    if ((fp = fopen("./listing9.5.txt", "w")) == NULL) {
        printf("can not open file");
        exit(0);
    }

    for (i = 0; i < 10; i++) {
        c = getchar();
        fputc(c, fp);
    }
    fclose(fp);
}