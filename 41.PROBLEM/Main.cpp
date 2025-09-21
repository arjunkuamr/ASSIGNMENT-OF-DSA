#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int temp = n, sum = 0, digits = 0;
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
    return sum == n;
}

int main() {
    cout << "Armstrong numbers under 1000: ";
    for (int i = 1; i < 1000; i++) {
        if (isArmstrong(i)) cout << i << " ";
    }
    return 0;
}
