#include <iostream>
#include <string>
using namespace std;

string input();
string input() {
    int n;
    cout << "Input a number: ";
    cin >> n;

    string s1 = "", s2 = "";
    for (int i = 0; i < n; i++) {
        cin >> s1;
        s2 = s2 + s1 + " ";
    }
    return s2;
}

int main() {
    string str;
    str = input();
    cout << str << endl;
}