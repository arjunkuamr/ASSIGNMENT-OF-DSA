#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    if (age < 13) cout << "Child";
    else if (age <= 19) cout << "Teenager";
    else if (age <= 59) cout << "Adult";
    else cout << "Senior";

    return 0;
}