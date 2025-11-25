// Program to demonstrate a Recursive Function
// Program by: Pradumon Sahani
// Class 12 – Computer Science

#include <iostream>
using namespace std;

// -----------------------------------------------
// Recursive function to find factorial of a number
// -----------------------------------------------
int factorial(int n) {

    if (n == 0) {

        // Base Case: factorial of 0 is always 1
        return 1;
    }
    else {

        // Recursive Call: n multiplied by factorial(n-1)
        return n * factorial(n - 1);
    }
}

int main() {

    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "\nFactorial of " << num << " is: " << factorial(num) << endl;

    return 0;   // Ending the program
}
