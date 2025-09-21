#include <iostream>
using namespace std;
int main() {
    double cp, sp;
    cout << "Enter Cost Price per dozen: ";
    cin >> cp;
    cout << "Enter Selling Price per dozen: ";
    cin >> sp;

    double costPerBanana = cp / 12.0;
    double sellPerBanana = sp / 12.0;

    double totalCost = costPerBanana * 25;
    double totalSell = sellPerBanana * 25;

    if (totalSell > totalCost)
        cout << "Profit = " << totalSell - totalCost;
    else if (totalSell < totalCost)
        cout << "Loss = " << totalCost - totalSell;
    else
        cout << "No Profit No Loss";

    return 0;
}
