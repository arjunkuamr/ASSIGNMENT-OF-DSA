#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    double avg = (a + b + c) / 3.0;
    cout << "Average = " << avg;
    return 0;
}
