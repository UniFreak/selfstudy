#include <iostream>
#include <vector>
using namespace std;

int main() {
    char c[11] = "abcdefghij";
    vector <char> v(c, c + 10);

    v.insert(v.begin() + 3, 'X');
    copy(v.begin(), v.end(), ostream_iterator <char> (cout, " "));

    cout << endl;
    v.insert(v.begin(), 3, 'A');
    copy(v.begin(), v.end(), ostream_iterator <char> (cout, " "));

    cout << endl;
    v.erase(v.begin() + 8);
    copy(v.begin(), v.end(), ostream_iterator <char> (cout, " "));
}