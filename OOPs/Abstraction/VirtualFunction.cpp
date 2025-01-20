// // Virtual Function
// // A virtual function in C++ is a member function in a base class that can be
// overridden in its derived class. When accessed via a pointer or reference to the base class,
// the derived class's implementation is called if it exists.

// // Key Features:
// // Defined using the virtual keyword in the base class.
// // Provides runtime polymorphism (also known as dynamic dispatch).
// // The function in the derived class must have the same signature as in the base class.
// // A virtual function can have a definition in the base class (not mandatory).

#include<iostream>
using namespace std;
class Base {
public:
    virtual void display() {
        cout << "Base class display" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {  // Override the virtual function
        cout << "Derived class display" << endl;
    }
};

int main() {
    Base* basePtr;      // Pointer to the base class
    Derived d;
    basePtr = &d;

    basePtr->display(); // Calls Derived's display() due to dynamic binding
    return 0;
}
