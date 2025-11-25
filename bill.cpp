// Program to accept name, quantity and rate of three products
// and calculate the amount of each product.
// Program by: Pradumon Sahani

#include <iostream>
using namespace std;

int main() {

    string name[3];    // To store product names
    int qty[3];        // To store quantities
    float rate[3];     // To store rates
    float amount[3];   // To store calculated amounts

    // Taking input for 3 products
    for (int i = 0; i < 3; i++) {

        cout << "Enter product name: ";
        cin >> name[i];

        cout << "Enter quantity: ";
        cin >> qty[i];

        cout << "Enter rate: ";
        cin >> rate[i];

        // Calculating amount
        amount[i] = qty[i] * rate[i];
    }

    // Displaying the result
    cout << "\nProduct\tQuantity\tRate\tAmount\n";

    for (int i = 0; i < 3; i++) {
        cout << name[i] << "\t" << qty[i] << "\t\t"
             << rate[i] << "\t" << amount[i] << endl;
    }

    return 0;
}
