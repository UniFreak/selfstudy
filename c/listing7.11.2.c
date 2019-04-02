#include <stdio.h>

void sort(int *p) {
    int t;
    if (*p > *(p+1)) {
        t = *p; *p = *(p+1); *(p+1) = t;
    } 
    if (*p > *(p+2)) {
        t = *p; *p = *(p+2); *(p+2) = t;
    }
    if (*(p+1) > *(p+2)) {
        t = *(p+1); *(p+1) = *(p+2); *(p+2) = t;
    }
}

int main()
{
    int a[3] = {3, 1, 5}, *p = a;
    sort(p);
    printf("3,1,5 after sort:%d, %d, %d\n", a[0], a[1], a[2]);
}