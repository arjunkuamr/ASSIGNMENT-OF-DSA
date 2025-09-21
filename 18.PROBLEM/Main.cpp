#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if ((a >= b && a <= c) || (a >= c && a <= b)) cout << "Middle = " << a;
    else if ((b >= a && b <= c) || (b >= c && b <= a)) cout << "Middle = " << b;
    else cout << "Middle = " << c;

    return 0;
}
