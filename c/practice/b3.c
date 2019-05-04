// @??? selection sort

#include <stdio.h>
int main ( )
{ 
    int xx[20],yy[20];
    int x,y ,x0,n,nn;
    for(x=0;x<20;x++)  scanf("%d", &xx[x]);
    nn=0;
    for(x=0;x<20;x++) {
        x0=xx[x];  
        y=0;
        while(yy[y]<x0 && y<nn) y++;
        if(nn<=y) {
            yy[y]=x0;
        } else {
            n=nn;
            while(n>y) {
                yy[n]=yy[n-1]; 
                n--;
            }
            yy[y]=x0;
        } nn++;
    }
    for(y=0;y<20;y++)
    printf("%d    ",yy[y]); printf("\n");
}