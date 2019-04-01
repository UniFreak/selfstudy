#include <stdio.h>
#include <string.h>

int main() {
    char a[4][80], b[80];
    int i, j, k;
    for (i = 0; i < 4; i++) {
        gets(a[i]);
    }

    for (i = 0; i < 3; i++) {
        for (j = 3; j > i; j--) {
            if (strcmp(a[j], a[j-1]) < 0) {
                strcpy(b, a[j]);
                strcpy(a[j], a[j-1]);
                strcpy(a[j-1], b);
            }
        }
    } 

    for (i = 0; i < 4; i++) {
        puts(a[i]);
    }
}