#include <iostream>
#include <iomanip>
using namespace std;

class iArray {
    int _size, *data;
public:
    iArray(int len): _size(len) {data = new int[len];}
    int& operator[](int i);
    int size() const  {return _size;}
    ~iArray() {delete [] data;}
};

int& iArray::operator[](int i) {
    if (i < 0 || i > _size) {
        cout << "invliad index";
        delete [] data;
        exit(1);
    }
    return data[i];
}

int main() {
    iArray a(10);
    cout << "number of array: " << a.size() << endl;
    for (int i = 0; i < a.size(); i++) {
        a[i] = 10 * (i+1);
    }
    for (int i = 0; i < a.size(); i++) {
        cout << setw(5) << a[i];
    }
}