#include <iostream>
using namespace std;

class student {
private:
    int no;
    char xm[10];
    char xb;
    int pdcj;
    int tycj;
    int kscj;
public:
    student(int no1, char* xm1, char xb1, int pdcj1, int tycj1, int kscj1) {
        no = no1;
        strcpy(xm, xm1);
        xb = xb1;
        pdcj = pdcj1;
        tycj = tycj1;
        kscj = kscj1;
    }
    bool isGood() {
        return pdcj > 85 && tycj > 85 && kscj > 85;
    }
    float avg() {
        return (pdcj+tycj+kscj) / 3;
    }
};

int main() {
    student *s[2];
    int no, pd, ty, ks;
    char xm[10], xb;
    for (int i = 0; i < 2; i++) {
        cout << "input student info number " << i << ":";
        cin >> no >> xm >> xb >> pd >> ty >> ks;
        s[i] = new student(no, xm, xb, pd, ty, ks);
    }
    for (int i = 0; i < 2; i++) {
        cout << "student " << i << " is good:" << s[i]->isGood() << endl;
    }
    for (int i = 0; i < 2; i++) {
        cout << "student " << i << " avg is:" << s[i]->avg() << endl;
    }
}