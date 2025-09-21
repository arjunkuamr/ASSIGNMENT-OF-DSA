#include <iostream>
using namespace std;

void printCharAndAscii(char ch) {
    cout << "Character: " << ch << " ASCII: " << static_cast<int>(ch) << endl;
}

int main() {
    char ch1, ch2, ch3;

    cout << "Enter three characters separated by spaces: ";
    cin >> ch1 >> ch2 >> ch3;

    printCharAndAscii(ch1);
    printCharAndAscii(ch2);
    printCharAndAscii(ch3);

    return 0;
}