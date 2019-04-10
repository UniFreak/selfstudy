#include <stdlib.h>
#include <stdio.h>

int main() {
    FILE *f;
    char c;

    if ((f = fopen("listing9.18.txt", "w")) == NULL) {
        printf("can not open file");
        exit(0);
    }

    while ((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}