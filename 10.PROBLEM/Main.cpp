#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

int main() {
    string time24;
    cout << "Enter time in 24-hour format (HH:MM): ";
    cin >> time24;

    int hour, minute;
    char colon;
    stringstream ss(time24);
    ss >> hour >> colon >> minute;

    string period = (hour >= 12) ? "PM" : "AM";
    int hour12 = hour % 12;
    if (hour12 == 0) hour12 = 12;

    cout << "12-hour format: ";
    cout << setw(2) << setfill('0') << hour12 << ":"
         << setw(2) << setfill('0') << minute << " " << period << endl;

    return 0;
}