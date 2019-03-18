#include <iostream>
using namespace std;

int max(int, int);
float max(float, float);
char max(char, char);
int max(int, int, int);

int main() {
    cout << max(1, 2) << endl;
    cout << max('a', 'm') << endl;
    cout << max(3.4, 5.6) << endl;
    cout << max(1, 2, 5) << endl;
}

int max(int a, int b) {
    return a > b ? a : b;
}
float max(float a, float b) {
    return a > b ? a : b;
}
char max(char a, char b) {
    return a > b ? a :  b;
}
int max(int a, int b, int c) {
    return max(a, max(b, c));
}
