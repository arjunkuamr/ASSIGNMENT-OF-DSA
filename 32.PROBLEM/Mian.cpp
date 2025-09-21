#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    int a = 0, b = 1, fib = 0;
    if (n == 1) fib = a;
    else if (n == 2) fib = b;
    else {
        for (int i = 3; i <= n; i++) {
            fib = a + b;
            a = b;
            b = fib;
        }
    }

    cout << n << "th term = " << fib;
    return 0;
}
