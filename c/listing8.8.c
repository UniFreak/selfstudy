#include <stdio.h>

struct xy {
    int x;
    float y[10];
};

struct ab {
    long a;
    struct xy b;
} ab1 = {1L, {2, {1.0, 2.0, 3.0}}};

int main() {
    printf("%ld, %d, %p, %f\n", ab1.a, ab1.b.x, ab1.b.y, ab1.b.y[1]);
}