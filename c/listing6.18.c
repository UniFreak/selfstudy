#include <stdio.h>
#include <string.h>

int main() {
    char sa[5][20], *ps[5];
    int i;
    for (i = 0; i < 5; i++) {
        ps[i] = sa[i];
        scanf("%s", ps[i]);
    }
    for (i = 0; i < 5; i++) {
        printf("length of %s is: %lu\n", ps[i], strlen(ps[i]));
    }
}