#include <stdlib.h>
#include <stdio.h>

int main() {
    FILE *fpi, *fpo;

    if ((fpi = fopen("listing9.15.in.txt", "r")) == NULL 
        || (fpo = fopen("listing9.15.out.txt", "w+")) == NULL
    ) {
        printf("can not open files\n");
        exit(0);
    }

    while (!feof(fpi)) {
        fputc(fgetc(fpi), fpo);
    }

    rewind(fpi);
    while (!feof(fpi)) {
        putchar(fgetc(fpi));
    }
    fclose(fpi);

    rewind(fpo);
    while (!feof(fpo)) {
        putchar(fgetc(fpo));
    }
    fclose(fpo);
}