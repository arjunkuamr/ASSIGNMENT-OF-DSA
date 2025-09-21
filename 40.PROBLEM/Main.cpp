#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, sum = 0, digits = 0, temp;
    cout << "Enter a number: ";
    cin >> n;

    temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }

    if (sum == n)
        cout << n << " is an Armstrong number";
    else
        cout << n << " is not an Armstrong number";

    return 0;
}
//Armstrong number: sum of digits^power = number, e.g. 153 = 1³ + 5³ + 3³)