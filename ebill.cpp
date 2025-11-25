// Monthly electric bill Calculator (OOP)
// Program by: Pradumon Sahani

#include <iostream>
using namespace std;

class Consumer {
    string name;
    int units;
    float rate;
public:
    void input() {
        cout << "Enter consumer name: ";
        cin >> name;
        cout << "Enter units consumed: ";
        cin >> units;
        cout << "Enter rate per unit: ";
        cin >> rate;
    }
    float calculateBill() {
        return units * rate;      // amount = units * rate
    }
    void display() {
        cout << "\nName: " << name << endl;
        cout << "Units: " << units << endl;
        cout << "Rate: " << rate << endl;
        cout << "Monthly Bill: " << calculateBill() << endl;
    }
};

int main() {
    Consumer c;
    c.input();
    c.display();
    return 0;
}
