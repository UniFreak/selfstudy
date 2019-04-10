#include <stdlib.h>
#include <stdio.h>

int main() {
    FILE *fp;
    char s[100];
    int i;

    if ((fp = fopen("listing9.8.txt", "w")) == NULL) {
        printf("can not open file");
        exit(0);
    }

    for (i = 0; i < 3; i++) {
        gets(s);
        fputs(s, fp);
    }
    fclose(fp);
}