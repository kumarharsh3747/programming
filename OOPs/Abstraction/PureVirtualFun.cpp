// Pure Virtual Function
// A pure virtual function is a virtual function with no implementation in the base class.
//  It forces all derived classes to provide their own implementation of the function.

// Key Features:
// Declared by assigning = 0 to the function in the base class.
// A class containing at least one pure virtual function is called an abstract class.
// You cannot instantiate an abstract class directly.
// Derived classes must override all pure virtual functions to be instantiable.

#include<iostream>
using namespace std;
class Base {
public:
    virtual void display() = 0; // Pure virtual function
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived class display" << endl;
    }
};

int main() {
    // Base b; // Error: Cannot instantiate abstract class
    Base* basePtr;
    Derived d;
    basePtr = &d;

    basePtr->display(); // Calls Derived's display()
    return 0;
}
