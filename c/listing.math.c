#include <math.h>
#include <stdio.h>

int main()
{
    printf("abs(-10)=%d\n", abs(-10));
    printf("abs(-32768)=%d\n", abs(-32768));
    printf("labs(-10)=%ld\n", labs(-10l));
    printf("fabs(-10.2)=%f\n", fabs(-10.2));
    printf("floor(-10.5)=%f\n", floor(-10.5));
    printf("floor(10.9)=%f\n", floor(10.9));
    printf("ceil(-10.5)=%f\n", ceil(-10.5));
    printf("ceil(10.9)=%f\n", ceil(10.9));
    printf("sqrt(4)=%f\n", sqrt(4));
    printf("log10(4)=%f\n", log10(4));
    printf("log(4)=%f\n", log(4));
    printf("exp(4)=%f\n", exp(4));
    printf("pow(2, -2)=%f\n", pow(2, -2));
    printf("pow(0.2, 2)=%f\n", pow(0.2, 2));
    printf("sin(90 * 3.14159 / 180)=%f\n", sin(90 * 3.14159 / 180));
    printf("cos(90 * 3.14159 / 180)=%f\n", cos(90 * 3.14159 / 180));
    printf("tan(45 * 3.14159 / 180)=%f\n", tan(45 * 3.14159 / 180));
}