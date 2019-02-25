#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Enter the date in American format"
         << "(e.g. December 25, 2002):";

    string date;
    getline(cin, date, '\n');
    int i = date.find(" ");
    string month = date.substr(0, i);
    int k = date.find(",");
    string day = date.substr(i + 1, k - (i + 1));
    string year = date.substr(k + 2, 4);
    string newDate = day + " " + month + " " + year;
    cout << "Original date: " << date << endl;
    cout << "Converted date: " << newDate << endl;
}