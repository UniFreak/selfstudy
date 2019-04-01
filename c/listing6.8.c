#include <stdio.h>

int main() {
    float a[10], *pa = a;
    ++pa, pa++, --pa, pa--, pa = pa + 5, pa = pa - 5, pa = a + 5;
}