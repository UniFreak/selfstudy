#include <iostream>
using namespace std;

void copystr(char *p1, char *p2, int m) {
    int n = 0;
    while (n < m - 1) {
        n++;
        p1++;
    }
    while (*p1 != '\0') {
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2 = '\0';
}

int main() {
    int m;
    char str1[20], str2[20];
    cout << "input string 1: ";
    gets(str1);
    cout << "input m: ";
    cin >> m;
    if (strlen(str1) < m) {
        cout << "input length greater then string 1" << endl;
    } else {
        copystr(str1, str2, m);
        cout << "copied string is: " << str2 << endl;
    }
}