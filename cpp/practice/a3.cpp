// @??

#include <iostream>
using namespace std;

class iArray {
private:
    int data[10];
public:
    void scan() {
        cout << "input 10 numbers:" << endl;
        int i = 0;
        while (i < 10) {
            cin >> data[i];
            i++;
        }
        cout << "done" << endl;
        return;
    }
    void put() {
        cout << "array is: ";
        int i = 0;
        while (i < 10) {
            cout << data[i] << " ";
            i++;
        }
        cout << "max is: " << getMax();
        cout << "sum is: " << getSum();
        cout << endl;
        return;
    }
    int getMax() {
        int i = 0;
        int max = data[0];
        while (i < 10) {
            if (data[i] > max) {
                max = data[i];
                i++;
            }
        }
        return max;
    }
    int getSum() {
        int sum = 0;
        int i = 0;
        while (i < 10) {
            sum += data[i];
            i++;
        }
        return sum;
    }
};

int main() {
    iArray a;
    a.scan();
    a.put();
}