#include <iostream>
using namespace std;

int main() {
    char ch[3][4] = {"AAA", "BB", "CCC"};
    char (*q)[4] = ch;
    char *p;

    int i;
    p = new char;
    *p = 'b';
    *(*q + 3) = *p;
    for (i = 0; i < 3; i++) {
        cout << q[i] << endl;
    }
}