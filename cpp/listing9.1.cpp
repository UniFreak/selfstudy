#include <iostream>
#include <string>
using namespace std;

class str {
    char* st;
public:
    str(str& s);
    str(const char* s);
    str& operator=(str& s);
    str& operator=(const char* s);
    void print() {cout << st << endl;}
    ~str() {delete st;}
};

str::str(str& s) {
    st = new char[strlen(s.st) + 1];
    strcpy(st, s.st);
}

str::str(const char* s) {
    st = new char[strlen(s) + 1];
    strcpy(st, s);
}

str& str::operator=(str& s) {
    if (this == &s) {
        return *this;
    }
    delete st;
    st = new char[strlen(s.st) + 1];
    strcpy(st, s.st);
    return *this;
}

str& str::operator=(const char* s) {
    delete st;
    st = new char[strlen(s) + 1];
    strcpy(st, s);
    return *this;
}

int main() {
    str s1("We"), s2("They"), s3(s1);
    s1.print();
    s2.print();
    s3.print();
    s2 = s1 = s3;
    s3 = (const char *)"Go Home";
    s3 = s3;
    s1.print();
    s2.print();
    s3.print();
}