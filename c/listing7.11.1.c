#include <stdio.h>

void sort(int *a, int *b, int *c) {
    int t;
    if (*a > *b) {
        t = *a; *a = *b; *b = t;
    } 
    if (*a > *c) {
        t = *a; *a = *c; *c = t;
    }
    if (*b > *c) {
        t = *b; *b = *c; *c = t;
    }
}

int main()
{
    int a = 1, b = 5, c = 3, *pa = &a, *pb = &b, *pc = &c;
    sort(pa, pb, pc);
    printf("1,5,3 after sort:%d, %d, %d\n", a, b, c);
}