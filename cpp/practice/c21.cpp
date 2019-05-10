#include <iostream>
#include <stdio.h>
using namespace std;

class complex{
    private: double real,imag;
    public:
        complex(){real=0; imag=0;}
        complex(double x,double y) {real = x; imag = y;}
        friend complex operator-(complex c1, complex c2){
            double rr=c1.real-c2.real;
            double ii=c1.imag-c2.imag;
            return complex(rr, ii);
        }
        void show();
};

void complex::show(){
    printf("The number is:  %6.3f + %6.3f i\n",real,imag);
    cout<<endl;
}

int main(){
    complex x(5,3),y(8,-4),z;

    z=x-y;
    z.show();
    z=y-y;
    z.show();
}