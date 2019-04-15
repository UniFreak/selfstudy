#include <stdio.h>
#define PR printf("x = %d, y = %d\n", x, y)

int x = 2, y = 8;
void fun() {
    x++;
    PR;
}

int main() {
    int x = 8;
    fun();
    PR;
}