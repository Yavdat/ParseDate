#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

Date ParseDate(const string& s) {
    stringstream stream(s);
    Date date;
    stream >> date.year;
    stream.ignore(1);
    stream >> date.month;
    stream.ignore(1);
    stream >> date.day;
    return date;
}

int main() {
    string date_str = "2017/01/25";
    Date date = ParseDate(date_str);
    cout << setw(2) << setfill('0') << date.day << '.'
         << setw(2) << setfill('0') << date.month << '.'
         << date.year << endl;
    return 0;
}