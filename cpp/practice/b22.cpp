#include <iostream>
using namespace std;

class base1 {
    protected:
       int m;
    public:
        void Show(){cout<<"Output the number: "<<m<<endl; }
};

class base2 {
    protected:
       int n;
    public:
        void Show(){cout<<"Output the number: "<<n<<endl; }
};

class dog:public base1,public base2{
    public:
        dog(int x,int y){m=x;n=y;}
        void Set(int x,int y) {m=x;n=y;}
        void Show() {
            cout<<"The result is:"<<m<<"   "<<n<<endl;
        }
};

int main(){
    dog lit_dog(45,87);
    lit_dog.Show();
    lit_dog.Set(98,27);
    lit_dog.base1::Show();
    lit_dog.base2::Show();
}