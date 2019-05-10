#include <iostream>
using namespace std;

class complex{
    private: double real,imag;
    public:
        complex() {real=0; imag=0;}
        complex(double x,double y) {real=x; imag=y;}

        complex add(complex,complex);
        friend ostream& operator<<(ostream&, complex);
};

complex complex::add(complex c1,complex c2){
    double rr=c1.real+c2.real;
    double ii=c1.imag+c2.imag;
    return complex(rr,ii);
}

ostream& operator<<(ostream &oss,complex cc){
    oss<<"这个复数是："<<cc.real<<" +";
    oss<<cc.imag<<"i  ;\n";
    return oss;
}

int main(){
    complex x(5.0,3),y(8.2,-4.3),z;

    z=z.add(x,y);
    cout<<z;
    x=z.add(y,y);
    cout<<x;
}