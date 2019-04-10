#include <stdlib.h>
#include <stdio.h>

int main() {
    FILE *fp;
    char s[100];

    if ((fp = fopen("listing9.9.txt", "r")) == NULL) {
        printf("can not open file");
        exit(0);
    }

    fgets(s, 21, fp);
    fputs(s, stdout);
    fclose(fp);
}