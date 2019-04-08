#include <stdlib.h>
#include <stdio.h>

int main() {
    printf("atof(\"0.1b23e2\")=%f\n", atof("0.1b23e2"));
    printf("atoi(\"12B00\")=%d\n", atoi("12B00"));
}