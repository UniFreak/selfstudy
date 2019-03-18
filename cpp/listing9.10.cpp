#include <iostream>
#include <fstream>
using namespace std;

struct list {
    int salary;
    char name[30];
    friend ostream& operator<<(ostream&, list&);
    friend istream& operator>>(istream&, list&);
};

ostream& operator<<(ostream& os, list& ob) {
    os << ob.salary << ' ' << ob.name << endl;
    return os;
}
istream& operator>>(istream& is, list& ob) {
    is >> ob.salary >> ob.name;
    return is;
}

int main() {
    list worker1[2] = {{1234, "Li Ming"}, {4567, "ZhangHong"}}, worker2[2];

    ofstream out("./listing9.10.pay.txt", ios::binary);
    if (! out) {
        cout << "create file failed" << endl;
        return 1;
    }
    for (int i = 0; i < 2; i++) {
        out << worker1[i];
    }
    out.close();

    ifstream in("./listing9.10.pay.txt", ios::binary);
    if (! in) {
        cout << "open file failed" << endl;
        return 1;
    }
    for (int i = 0; i < 2; i++) {
        in >> worker2[i];
        cout << worker1[i];
    }
    in.close();
}