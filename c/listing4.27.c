#include <stdio.h>

int main() {
    int y, m, d, days, flag = 1;
    printf("input year, month, day:");
    scanf("%d, %d, %d", &y, &m, &d);

    switch(m) {
        case 1: days = 0; break;
        case 2: days = 31; break;
        case 3: days = 31 + 28; break;
        case 4: days = 31 + 28 + 31; break;
        case 5: days = 31 + 28 + 31 + 30; break;
        case 6: days = 31 + 28 + 31 + 30 + 31; break;
        case 7: days = 31 + 28 + 31 + 30 + 31 + 30; break;
        case 8: days = 31 + 28 + 31 + 30 + 31 + 30 + 31; break;
        case 9: days = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31; break;
        case 10: days = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30; break;
        case 11: days = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31; break;
        case 12: days = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30; break;
        default: printf("input error"); flag = 0;
    }
    if (d < 32) {
        days += d;
    } else {
        flag = 0;
        printf("input error of day\n");
    }

    if ((m > 2) && ((y%4 == 0) && (y%100 != 0) || (y % 400 == 0))) {
        days++;
    }

    if (flag == 1) {
        printf("year = %d, month=%d, day=%d ---- No = %d\n", y, m, d, days);
    }
}