#include <stdio.h>

struct xy {
    int x;
    float y[10];
} xy1 = {1, {1.0, 2.0, 3.0}};

int main() {
    printf("%d, %p, %f\n", xy1.x, xy1.y, xy1.y[1]);
}