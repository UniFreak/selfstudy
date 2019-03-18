#include "student.h"

void student::display(vector <student>& v) {
    cout << "no" << setw(20) << "score" << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i].getnum() << setw(12) << v[i].getscore() << endl;
    }
}

void student::set(vector <student>& v) {
    student s;
    string n;
    double c;
    while (1) {
        cout << "no:";
        cin >> n;
        if (n == "0") {
            ofstream of("./scores.txt");
            if (! of) {
                cout << "open file failed" << endl;
                return;
            }
            for (int i = 0; i < v.size(); i++) {
                of << v[i].number << " " << v[i].score << " ";
            }
            of.close();
            cout << "wrote total " << v.size() << " students" << endl;
            return;
        }
        s.setnum(n);
        cout << "score: ";
        cin >> c;
        s.setscore(c);
        v.push_back(s);
    }
}

void student::read() {
    string n;
    double c;
    ifstream rf("./scores.txt");
    if (! rf) {
        cout << "open file failed" << endl;
        return;
    }
    cout << "number:" << setw(20) << "score" << endl;
    while(1) {
        rf >> n >> c;
        if (rf.eof()) {
            rf.close();
            return;
        }
        cout << n << setw(12) << c << endl;
    }
}

int main() {
    vector <student> st;
    student stud;
    stud.set(st);
    cout << "vector is like:\n";
    stud.display(st);
    cout << "saved is like:\n";
    stud.read();
}