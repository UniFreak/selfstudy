#include <iostream>
using namespace std;

typedef double array[12];

void avgcount(::array &, int);

void avgcount(::array &scores, int len) {
    double avg(0);
    int count(0);
    for (int i = 0; i < len -2; i++) {
        avg += scores[i];
        if (scores[i] < 60) {
            count++;
        }
        avg = avg / (len - 2);
    }
    scores[len - 2] = avg;
    scores[len - 1] = count;
}

int main() {
    ::array scores = {12, 34, 56, 78, 90, 98, 76, 85, 64, 43};
    avgcount(scores, 12);
    cout << "average scores is " << scores[10] << "; under 60 count is :" << scores[11] << endl;
}
