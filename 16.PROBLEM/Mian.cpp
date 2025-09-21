#include <iostream>
using namespace std;

int main() {
    double temp;
    char choice;
    cout << "Enter temperature: ";
    cin >> temp;
    cout << "Convert to (C/F)? ";
    cin >> choice;

    if (choice == 'C' || choice == 'c') {
        cout << "Celsius = " << (temp - 32) * 5 / 9;
    } else if (choice == 'F' || choice == 'f') {
        cout << "Fahrenheit = " << (temp * 9 / 5) + 32;
    } else {
        cout << "Invalid choice!";
    }

    return 0;
}
