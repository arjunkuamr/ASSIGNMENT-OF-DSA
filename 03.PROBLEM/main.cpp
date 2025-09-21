#include <iostream>
using namespace std;
int main() {
    double p, r, t;
    cout << "Enter Principal, Rate, Time: ";
    cin >> p >> r >> t;
    double SI = (p * r * t) / 100.0;
    cout << "Simple Interest = " << SI;
    return 0;
}
