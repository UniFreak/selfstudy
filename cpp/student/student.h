#if !defined(STUDENT_H)
#define STUDENT_H
#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

class student {
    string number;
    double score;
public:
    void setnum(string s) {number = s;}
    void setscore(double s) {score = s;}
    string getnum() {return number;}
    double getscore() {return score;}
    void set(vector <student>&);
    void display(vector <student> &);
    void read();
};

#endif