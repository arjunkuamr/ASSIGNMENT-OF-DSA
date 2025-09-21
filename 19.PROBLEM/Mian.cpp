#include <iostream>
using namespace std;

bool isLeap(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int main() {
    int month, year;
    cout << "Enter month (1-12) and year: ";
    cin >> month >> year;

    int days;
    if (month == 2) days = isLeap(year) ? 29 : 28;
    else if (month == 4 || month == 6 || month == 9 || month == 11) days = 30;
    else days = 31;

    cout << "Days = " << days;
    return 0;
}
