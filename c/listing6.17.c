#include <stdio.h>

int main() {
    float f[3], *pf[3], *p;
    pf[0] = f; pf[1] = f+1; pf[2] = f+2;
    scanf("%f, %f, %f", pf[0], pf[1], pf[2]);

    if (*pf[0] < *pf[1]) {
        p = pf[0]; pf[0] = pf[1]; pf[1] = p;
    }
    if (*pf[0] < *pf[2]) {
        p = pf[0]; pf[0] = pf[2]; pf[2] = p;
    }
    if (*pf[1] < *pf[2]) {
        p = pf[1]; pf[1] = pf[2]; pf[2] = p;
    }

    printf("%f, %f, %f\n", *pf[0], *pf[1], *pf[2]);
}