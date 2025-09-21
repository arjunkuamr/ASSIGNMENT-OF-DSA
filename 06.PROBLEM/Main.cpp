#include <iostream>
using namespace std;

// Function to return ASCII code of a character
int getAsciiCode(char ch) {
    return static_cast<int>(ch);
}

int main() {
    char inputChar;
    cout << "Enter a character: ";
    cin >> inputChar;

    int asciiCode = getAsciiCode(inputChar);
    cout << "ASCII code of '" << inputChar << "' is: " << asciiCode << endl;

    return 0;
}