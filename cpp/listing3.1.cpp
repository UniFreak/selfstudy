#include <iostream>
#include <string>
using namespace std;

void swap(string, string);

int main() {
    string str1("now");
    string str2("then");
    swap(str1, str2);
    cout << "after return: str1 = " << str1 << ", str2 = " << str2 << endl;
}

void swap(string str1, string str2) {
    string temp = str1;
    str1 = str2;
    str2 = temp;
    cout << "swap to: str1 = " << str1 << ", str2 = " << str2 << endl;
}