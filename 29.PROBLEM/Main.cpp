#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool isPrime = true;
    if (n <= 1) isPrime = false;
    else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) cout << n << " is a Prime number";
    else cout << n << " is not a Prime number";

    return 0;
}
