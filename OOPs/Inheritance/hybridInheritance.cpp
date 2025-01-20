/*Hybrid Inheritance:
A combination of two or more types of inheritance,
often leading to a diamond problem (resolved using virtual inheritance).

*/

#include <iostream>
using namespace std;

// Base class
class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

// Intermediate base classes inheriting from A
class B : public A {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

class C : public A {
public:
    void showC() {
        cout << "Class C" << endl;
    }
};

// Derived class inheriting from both B and C
class D : public B, public C {
public:
    void showD() {
        cout << "Class D" << endl;
    }
};

int main() {
    D obj;

    // Calling functions from different base classes
    obj.showD();       // Class D
    obj.showB();       // Class B
    obj.showC();       // Class C

    // Ambiguity arises when calling a method from A
    // obj.showA();    // Error: Ambiguity between B::A and C::A

    // Resolving ambiguity by specifying the path
    obj.B::showA();    // Access A through B
    obj.C::showA();    // Access A through C

    return 0;
}


