// C++ Calculator for Area & Perimeter of triangle (Heron's formula)
// Program by: Pradumon Sahani

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;        // accept three sides

    // Check if valid triangle
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Invalid triangle" << endl;
        return 0;
    }

    double perimeter = a + b + c;
    double s = perimeter / 2.0;            // semi-perimeter
    double area = sqrt(s * (s - a) * (s - b) * (s - c)); // Heron's formula

    cout << "Perimeter = " << perimeter << endl;
    cout << "Area = " << area << endl;

    return 0;
}
