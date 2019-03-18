#include <stdio.h>

int max(int i1, int i2, int i3) {
    int m1;
    if ((i1 >= i2) && (i1 >= i3)) m1 = i1;
    if ((i2 >= i1) && (i2 >= i3)) m1 = i2;
    if ((i3 >= i1) && (i3 >= i2)) m1 = i3;
    return (m1);
}

int min(int i1, int i2, int i3) {
    int m1;
    if (i1 <= i2) {
        if (i1 <= i3) {
            m1 = i1;
        } else {
            m1 = i3;
        }
    } else if (i2 <= i3) {
        m1 = i2; // is this valid comment? yes
    } else {
        m1 = i3;
    }

    return (m1);
}

int main() {
    int x, y, z, a;
    scanf("%d, %d, %d", &x, &y, &z);
    a = max(x, y, z);
    printf("max=%d\n", a);
    a = min(x, y, z);
    printf("min=%d\n", a);
}