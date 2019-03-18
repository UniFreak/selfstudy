#include <iostream>
#include <string>
using namespace std;

void change(const string&);
void change(const string&s) {
    string s2 = s + " NO!";
    cout << s2 << endl;
}

int main() {
    string s = "Can you change this?";
    change(s);
    cout << s << endl;
}