#include <iostream>
#include <string>
using namespace std;

void display(string, string, string);
void display(string s1, string s2 = "", string s3 = "") {
    if (s2 == "" && s3 == "") {
        cout << s1 << endl;
    } else if (s3 == "") {
        cout << s1 << ", " << s2 << endl;
    } else {
        cout << s1 << ", " << s2 << ", " << s3 << endl;
    }
}

int main() {
    string s1 = "now", s2 = "then", s3 = "past";
    display(s1);
    display(s1, s2, s3);
    display(s3, s1);
    display(s2, s3);
}