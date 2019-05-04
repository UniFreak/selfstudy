// @??? 百钱买百鸡问题
#include <stdio.h>

int main() {
    int x = 0, y = 0, z = 0;
    while (z < 300) {
        while (y < 100 / 2) {
            while (x < 100 / 3) {
                if (x + y + z == 100
                    && 3 * x + 2 * y + z / 3 == 100) {
                    printf("x = %d, y = %d, z = %d\n", x, y, z);
                }
                x++;
            }
            y++;
        }
        z++;
    }
}