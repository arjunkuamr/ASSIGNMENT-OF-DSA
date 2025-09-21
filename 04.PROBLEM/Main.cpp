#include <iostream>
using namespace std;
int main() {
    double l, w, h;
    cout << "Enter length, width and height: ";
    cin >> l >> w >> h;
    double volume = l * w * h;
    cout << "Volume of cuboid = " << volume;
    return 0;
}
