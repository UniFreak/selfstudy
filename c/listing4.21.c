#include <stdio.h>

int main() {
    char c1, c2;
    printf("input score:");
    scanf("%c%c", &c1, &c2);
    switch(c1) {
        case '5':
            switch(c2) {
                case '+': printf("score = 100\n"); break;
                case '\n': printf("score = 90\n"); break;
                case '-': printf("score = 85\n"); break;
            }
            break;
        case '4':
            switch(c2) {
                case '+': printf("score = 80\n"); break;
                case '\n': printf("score = 75\n"); break;
                case '-': printf("score = 70\n"); break;
            }
            break;
        case '3': printf("score = 60\n"); break;
        case '2': 
        case '1': printf("score < 60\n"); break;
        default: printf("input error!\n");
    }
}