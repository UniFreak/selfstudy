#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <char> c1(10), c2(10);
    cout << c1.empty() << ", " << sizeof(c1) << ", ";
    for (char i = 'a', j = 0; j < 10; j++) {
        c1[j] = i + j;
    }
    cout << c1.max_size() << ", " << c1.capacity() << ", " << c1.size() << endl;
    for (int i = 0; i < 10; i++) {
        cout << c1[i] << " ";
    }
    cout << endl;

    copy(c1.begin(), c1.end(), c2.begin());
    copy(c1.begin(), c1.end(), ostream_iterator <char> (cout, " "));

    cout << endl;
    reverse_copy(c1.begin(), c1.end(), ostream_iterator <char> (cout, " "));

    cout << endl;
    cout << c1.front() << ", " << c1.back() << ", " << c1.operator[](5) << endl;

    sort(c2.begin(), c2.end(), greater <char>());
    copy(c2.begin(), c2.end(), ostream_iterator <char>(cout, " "));
}