#include <iostream>
using namespace std;

int main() {
    int items;
    float price, total, finalAmount;
    cout << "Enter number of items: ";
    cin >> items;
    cout << "Enter price per item: ";
    cin >> price;
    total = items * price;

    if (items > 1000) {
finalAmount = total - (0.10 * total); 
 cout << "Discount applied (10%)\n";
    } else {
        finalAmount = total;
        cout << "No discount applied\n"; }
    cout << "Total expense: " << finalAmount << endl;

    return 0;
}
