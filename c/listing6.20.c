#include <stdio.h>

int main() {
    char ca[5], *pca[5], max;
    int i;
    for (i = 0; i < 5; i++) {
        pca[i] = &ca[i];
        scanf("%c", pca[i]);
    }

    max = *pca[0];
    for (i = 1; i < 5; i++) {
        if (max < *pca[i]) {
            max = *pca[i];
        }
    }

    printf("max is %c\n", max);
}
