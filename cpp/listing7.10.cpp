#include <iostream>
#include <vector>
using namespace std;

int main() {
    char c[11] = "abcdefghij";
    vector <char> v(c, c + 10);
    for (int i = 0; i < 10; i++) {
        cout << v[i] << " ";
    }
    cout << endl << v.capacity() << ", " << v.size() << endl;

    v.pop_back();
    v.push_back('W');
    v.push_back('w');
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl << v.capacity() << ", " << v.size() << endl;

    v.clear();
    cout << v.empty() << endl;
}