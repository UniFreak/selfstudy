#include <stdlib.h>
#include <stdio.h>

int main() {
    FILE *fp;
    char s[11];
    int i;

    if ((fp = fopen("listing9.10.txt", "w")) == NULL) {
        printf("can not open file to write");
        exit(0);
    }
    for (i = 0; i < 6; i++) {
        gets(s);
        fputs(s, fp);
    }
    fclose(fp);


    if ((fp = fopen("listing9.10.txt", "r")) == NULL) {
        printf("can not open file to read");
        exit(0);
    }
    for (i = 0; i < 3; i++) {
        fgets(s, 11, fp);
    }
    fclose(fp);

    printf("%s\n", s);
}