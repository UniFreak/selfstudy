#include <stdlib.h>
#include <stdio.h>

int same(char *f1, char *f2) {
    FILE *fp1, *fp2;
    int r;

    if ((fp1 = fopen(f1, "r")) == NULL
        || (fp2 = fopen(f2, "r")) == NULL
    ) {
        printf("can not open file");
        exit(0);
    }

    while (!feof(fp1) && !feof(fp2)) {
        if (fgetc(fp1) != fgetc(fp2)) {
            r = 0;
            break;
        }
    }
    if (!feof(fp1) || !feof(fp2)) {
        r = 0;
    } else {
        r = 1;
    }

    fclose(fp1);
    fclose(fp2);
    return r;

}

int main() {
    if (same("listing9.20.1.txt", "listing9.20.2.txt")) {
        printf("the same\n");
    } else {
        printf("has difference\n");
    }
}