#include <iostream>
using namespace std;

class shape {
    public:
        virtual double area() {return 0;};
};

class square:public shape{
    protected:
        double H;
    public:
        square(double i) {H=i;}
        double area() {return H*H;}
};

class circle:public shape{
    protected:
        double r;
    public:
        circle(double i) {r=i;}
        double area() {return r*r*3.1415926;}
};

class rectangle:public square{
    protected:
        double W;
    public:
        rectangle(double w,double h):square(h) {W=w;}
        double area() {return H*W;}
};

double total(shape * s[],int n){
    double sum=0.0;
    for(int i=0;i<n;i++) sum=sum+s[i]->area();
    return sum;
}

int main(){
    float sum;
    shape *s[3];
    s[0]=new square(4);
    s[1]=new circle(5);
    s[2]=new rectangle(5,3);
    for(int i=0;i<3;i++) cout<<"S["<<i<<"]的面积是："<<s[i]->area()<<endl;
    sum=total(s,3);
    cout<<"总的面积是:"<<sum<<" !\n";
}
