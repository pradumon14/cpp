// A program to sort 10 numbers in an array 
// Program by: Pradumon Sahani

#include <iostream>
using namespace std;

int main() {
    int a[10];

    // Input 10 numbers
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    // Simple bubble sort (ascending)
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Display sorted numbers
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
