#include <stdio.h>

int main() {
    int a = 5, *p1 = &a, *p2;
    a = *p1 + 3;
    *p1 = *p1 + *p2;
    *p2 = *p1;
}