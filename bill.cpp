// Program to accept name, quantity and rate of three products
// and calculate the amount of each product.
// Program by: Pradumon Sahani

#include <iostream>
#include <iomanip>   // For table formatting
using namespace std;

int main() {

    string name[3];     // Stores product names
    int qty[3];         // Stores quantities
    float rate[3];      // Stores rates
    float amount[3];    // Stores amount = qty * rate
    float total = 0;    // Stores total bill amount

    cout << "=== PRODUCT BILLING SYSTEM ===\n";

    // Taking input for 3 products
    for (int i = 0; i < 3; i++) {

        cout << "\nEnter name of product " << i + 1 << ": ";
        cin >> name[i];

        cout << "Enter quantity: ";
        cin >> qty[i];

        cout << "Enter rate: ";
        cin >> rate[i];

        amount[i] = qty[i] * rate[i]; // Calculating amount
        total += amount[i];           // Adding to total
    }

    // Displaying the result using formatted table
    cout << "\n-----------------------------------------------------\n";
    cout << left << setw(12) << "Product"
         << setw(12) << "Quantity"
         << setw(12) << "Rate"
         << setw(12) << "Amount" << endl;
    cout << "-----------------------------------------------------\n";

    for (int i = 0; i < 3; i++) {
        cout << left << setw(12) << name[i]
             << setw(12) << qty[i]
             << setw(12) << rate[i]
             << setw(12) << amount[i] << endl;
    }

    cout << "-----------------------------------------------------\n";
    cout << "Total Amount: Rs. " << total << endl;

    return 0;
}
