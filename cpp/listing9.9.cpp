#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char ch[15];
    char const *p = "abcdefg";
    ofstream ofile;
    ofile.open("./listing9.9.o.txt");
    ofile << p;
    ofile << "GoodBye!";
    ofile.close();

    ifstream ifile("./listing9.9.i.txt");
    for (int i = 0; i < 14; i++) {
        ifile >> ch[i];
    }
    ch[14] = '\0';
    ifile.close();
    cout << ch;
}