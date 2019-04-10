#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *f;
    char c;

    if ((f = fopen("listing9.19.txt", "r+")) == NULL) {
        printf("can not open file");
        exit(0);
    }

    while (! feof(f)) {
        c = fgetc(f);
        if (islower(c)) {
            c = toupper(c);
            fseek(f, -1L, 1);
            fputc(c, f);
            fseek(f, 0L, 1);
        }
    }
    fclose(f);
}