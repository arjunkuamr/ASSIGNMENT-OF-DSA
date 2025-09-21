#include <iostream>
using namespace std;

int main() {
    char ch1, ch2, ch3;

    cout << "Enter three characters separated by spaces: ";
    cin >> ch1 >> ch2 >> ch3;

    cout << "Character: " << ch1 << " ASCII: " << static_cast<int>(ch1) << endl;
    cout << "Character: " << ch2 << " ASCII: " << static_cast<int>(ch2) << endl;
    cout << "Character: " << ch3 << " ASCII: " << static_cast<int>(ch3) << endl;

    return 0;
}