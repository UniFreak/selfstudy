#include <stdio.h>

int main() {
    int n = 0, m = 0;
    char a[80], b[80], c[80];
    char *p = c;
    gets(p);

    while (*p != '\0') {
        if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z')) {
            a[m] = *p;
            m++;
            p++;
        } else {
            b[n] = *p;
            n++;
            p++;
        }
    }
    a[m] = '\0';
    b[n] = '\0';

    puts(a);
    puts(b);
}