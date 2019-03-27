#include <stdio.h>
#include <string.h>

int main() {
    char a[80], b[40];
    int na, nb, i, j, flag;

    gets(a);
    gets(b);
    na = strlen(a);
    nb = strlen(b);

    flag = 0;
    for (i = 0; na - i >= nb; i++) {
        flag = 1;
        for (j = 0; j < nb; j++) {
            if (a[i+j] != b[j]) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            break;
        }
    }

    if (flag == 1) {
        printf("%s\n%s\n%d\n", a, b, i+1);
    } else {
        printf("b_string not is substring of a_string!\n");
    }
}