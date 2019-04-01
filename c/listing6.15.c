#include <stdio.h>
#include <string.h>

int main() {
    char *p = "12345678", a[10], *pa, *pp, flag;

    while (1) {
        gets(a);
        pp = p;
        pa = a;
        flag = 'e';
        while (*pp != '\0') {
            if (*pa > *pp) {
                flag = 'g';
                break;
            }
            if (*pa < *pp) {
                flag = 'l';
                break;
            }
            pa++;
            pp++;
        }
        if ((flag == 'e') && (*pa != '\0')) {
            flag = 'g';
        }

        if (flag == 'e') {
            printf("%s == %s\n", p, a);
            break;
        } else if (flag == 'g') {
            printf("larger!\n");
        } else {
            printf("smaller!\n");
        }
    }
}