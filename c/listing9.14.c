#include <stdlib.h>
#include <stdio.h>

struct birthday {
    int year;
    int month;
    int day;
};

struct student {
    long number;
    char name[10];
    struct birthday bd;
};

int main() {
    struct student s[3];
    int i;
    FILE *fp;

    for (i = 0; i < 3; i++) {
        scanf("%ld", &s[i].number);
        scanf("%s", s[i].name);
        scanf("%d", &s[i].bd.year);
        scanf("%d", &s[i].bd.month);
        scanf("%d", &s[i].bd.day);
    }

    if ((fp = fopen("listing9.14.dat", "wb")) == NULL) {
        printf("can not open file for write");
        exit(0);
    }
    fwrite(s, sizeof(struct student), 3, fp);
    fclose(fp);

    if ((fp = fopen("listing9.14.dat", "rb")) == NULL) {
        printf("can not open file for read");
        exit(0);
    }
    fread(s, sizeof(struct student), 2, fp);
    for (i = 0; i < 2; i++) {
        printf("number=%ld, name=%s, birthday=%d.%d.%d\n", 
            s[i].number, s[i].name, s[i].bd.year, s[i].bd.month, s[i].bd.day
        );
    }

}