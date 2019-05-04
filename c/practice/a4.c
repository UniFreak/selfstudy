// 三元二次方程整数解: x^2 + 5y^2 = z^2 (0 < x < y < z < 20)
#include <stdio.h>

int main()
{
    int x, y, z;

    z = 1;
    while (z < 20) {
        y = 1;
        while (y < z) {
            x = 1;
            while (x < y) {
                if (x * x + 5 * y * y == z * z) {
                    printf("x = %d, y = %d, z = %d\n", x, y, z);
                }
                x++;
            }
            y++;
        }
        z++;
    }
}