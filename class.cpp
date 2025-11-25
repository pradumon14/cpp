// Demonstrate base class and subclass
// Program by: Pradumon Sahani

#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
public:
    void setName(string n) {
        name = n;
    }
    void showName() {
        cout << "Name: " << name << endl;
    }
};

// Derived class (subclass)
class Student : public Person {
    int roll;
public:
    void setRoll(int r) {
        roll = r;
    }
    void display() {
        showName();                  // using base class method
        cout << "Roll No: " << roll << endl;
    }
};

int main() {
    Student s;
    string nm;
    int r;
    cin >> nm;
    cin >> r;
    s.setName(nm);
    s.setRoll(r);
    s.display();
    return 0;
}
