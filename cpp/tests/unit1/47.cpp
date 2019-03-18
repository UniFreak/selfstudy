#include <iostream>
using namespace std;

int main() {
    char ch[3][4] = {"AAA", "BB", "CCC"}, (*q)[4] = ch, *p;
    p = new char;
    *p = 'b';
    *(*q+3) = *p;
    for (int i = 0; i < 3; i++) {
        cout << q[i] << endl;
    }
}