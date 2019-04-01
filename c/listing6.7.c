#include <stdio.h>

int main() {
    short a[10], *pa = a;
    pa = pa + 5;
    pa--;
}