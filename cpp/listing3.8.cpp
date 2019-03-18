#include <iostream>
using namespace std;


int a[] = {2, 4, 6, 8, 10};

int& index(int);
int& index(int i) {
    return a[i];
}

int main() {
    index(3) = 16;
    cout << a[3] << endl;
}