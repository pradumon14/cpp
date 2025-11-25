// A program to sort 10 numbers in ascending order using Bubble Sort
// Program by: Pradumon Sahani

#include <iostream>
using namespace std;

int main() {

    int a[10];   // Array to store 10 numbers

    // ---- INPUT SECTION ----
    cout << "Enter 10 numbers (separated by space or new lines):" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    // ---- BUBBLE SORT LOGIC ----
    for (int i = 0; i < 9; i++) {           // Total passes
        for (int j = 0; j < 9 - i; j++) {   // Comparisons in each pass
            if (a[j] > a[j + 1]) {
                // Swap the elements
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // ---- OUTPUT SECTION ----
    cout << "\nSorted numbers in ascending order:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
