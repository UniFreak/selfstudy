#include <iostream>
#include <string>
using namespace std;

void swap(int[]);

int main() {
    int a[] = {3, 8};
    swap(a);
    cout << "after return: a[0] = " << a[0] << ", a[1] = " << a[1] << endl;
}

void swap(int a[]) {
    int temp = a[0]; 
    a[0] = a[1];
     a[1] = temp;
    cout << "swap to: a[0] = " << a[0] << ", a[1] = " << a[1] << endl;
}