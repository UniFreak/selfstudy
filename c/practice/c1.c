#include "stdio.h"

int main() {
    void change();
    char c,*p=&c,bb ;
    while ( (*p=getchar()) != '\n' ) { 
        bb=2; 
        change(p, &bb);
        if (bb == 1) {
            printf("%c", *p);
        }
    }
    printf("\n");
}

void change(char *pc, char *aa) { 
    if ( *pc>='a'  &&  *pc<='z' ) *aa=1;
}
