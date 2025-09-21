#include <iostream>
using namespace std;

bool isFibonacci(int num) {
    int a = 0, b = 1;
    if (num == 0 || num == 1) return true;
    while (b < num) {
        int next = a + b;
        a = b;
        b = next;
    }
    return (b == num);
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (isFibonacci(n))
        cout << n << " is in Fibonacci series";
    else
        cout << n << " is not in Fibonacci series";

    return 0;
}
