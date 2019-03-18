#include <iostream>
using namespace std;

class object {
    private:
        int val;
    public:
        object():val(0) {
            cout << "default constructor for object" << endl;
        }
        object(int i):val(i) {
            cout << "constructor for object " << val << endl;
        }
        ~object() {
            cout << "deconstructor for object " << val << endl;
        }
};

class container {
private:
    object one;
    object two;
    int data;

public:
    container():data(0) {
        cout << "default constructor for container" << endl;
    }
    container(int i, int j, int k);
    ~container() {
        cout << "deconstructor for container " << data << endl;
    }

};

container::container(int i, int j, int k):two(i),one(j) {
    data = k;
    cout << "constructor for container " << data << endl;
}

int main() {
    container c1, c2(5, 6, 10);
}