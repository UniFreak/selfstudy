#include <stdlib.h>
#include <stdio.h>

void fcopy(char *f1, char *f2) {
    FILE *fp1, *fp2;
    if ((fp1 = fopen(f1, "r")) == NULL || (fp2 = fopen(f2, "w+")) == NULL) {
        printf("can not open files");
        exit(0);
    }

    while (!feof(fp1)) {
        fputc(fgetc(fp1), fp2);
    }
    fclose(fp1);
    fclose(fp2);
}

int main() {
    char f1[80], f2[80], *fp1 = f1, *fp2 = f2;
    gets(fp1);
    gets(fp2);
    fcopy(f1, f2);
}