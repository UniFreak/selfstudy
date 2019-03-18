#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    float a[4] = {1.1, 2.2, 3.3, 4.4};
    vector <float> va(a, a+4), vb(4);

    typedef vector <float>::iterator iterator;
    iterator first = va.begin();
    for (; first < va.end(); first++) {
        cout << *first << " ";
    }
    for (first--; first > va.begin() -1; first--) {
        cout << *first << " ";
    }
    copy(va.begin(), va.end(), ostream_iterator <double>(cout, " "));

    cout << endl;

    typedef vector <float>::reverse_iterator reverse_iterator;
    reverse_iterator last = va.rbegin();
    for (; last < va.rend(); last++) {
        cout << *last << " ";
    }
    for (last--; last > va.rbegin() -1; last--) {
        cout << *last << " ";
    }
    copy(va.rbegin(), va.rend(), ostream_iterator <double>(cout, " "));

}