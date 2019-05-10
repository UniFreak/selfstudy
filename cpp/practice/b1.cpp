//求整数的平方与阶乘。
#include <iostream>
using namespace std;

class IntegerNum {
    private:int n;
    public:
        IntegerNum(int x){n=x;}
        int getSQR();
        int getJie();
};

int IntegerNum::getSQR(){
    cout<<n;
    return n*n;
}

int IntegerNum::getJie(){
    int x=1;
    for(int i=1;i<=n;i++) x=x*i;
    return x;
}

int main() {
    int n;

    cout<<"请输入一个一位整数:";
    cin>>n;
    cout<<n;
    IntegerNum num(n);
    cout<<"\n输入的数据是："<<n <<"  其平方是："<<num.getSQR();
    cout<<".  其阶乘是:  "<<num.getJie()<<". \n";
 }
