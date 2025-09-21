#include <iostream>
using namespace std;

char asciiToChar(int asciiCode) {
    return static_cast<char>(asciiCode);
}

int main() {
    int asciiCode;
    cout << "Enter an ASCII code (0-127): ";
    cin >> asciiCode;

    if (asciiCode < 0 || asciiCode > 127) {
        cout << "Invalid ASCII code. Please enter a value between 0 and 127.\n";
        return 1;
    }

    char character = asciiToChar(asciiCode);
    cout << "The corresponding character is: " << character << endl;

    return 0;
}