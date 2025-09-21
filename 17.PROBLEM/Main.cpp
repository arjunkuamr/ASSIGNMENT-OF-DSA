#include <iostream>
using namespace std;

bool isLeap(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int main() {
    int start, end;
    cout << "Enter start year: ";
    cin >> start;
    cout << "Enter end year: ";
    cin >> end;

    cout << "Leap years: ";
    for (int y = start; y <= end; y++) {
        if (isLeap(y)) cout << y << " ";
    }
    return 0;
}
