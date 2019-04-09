#include <stdio.h>
#include <string.h>

struct birthday {
    int year;
    int month;
    int day;
};

struct person {
    char name[10];
    char sex;
    struct birthday bir;
    float wage;
} x;

int main() {
    strcpy(x.name, "gu");
    x.sex = 'f';
    x.bir.year = 1972;
    x.bir.month = 10;
    x.bir.day = 3;
    x.wage = 6880.0;

    printf("name=%s, sex=%c, wage=%f\n", x.name, x.sex, x.wage);
    printf("birthday=%4d.%2d.%2d\n", x.bir.year, x.bir.month, x.bir.day);
}