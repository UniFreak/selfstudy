#include <iostream>
#include <string>
using namespace std;

void swap(string &, string &);

int main() {
    string a = "now", b = "then";
    swap(a, b);
    cout << "after return: a = " << a << ", b = " << b << endl;
}

void swap(string &a, string &b) {
    string temp = a; 
    a = b;
    b = temp;
    cout << "swap to: a = " << a << ", b = " << b << endl;
}