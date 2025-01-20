/*Runtime Polymorphism

Inheritance and Virtual Functions:

Allows a derived class to override a base class method,
and the correct method is called based on the object type at runtime.*/

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* animal;
    Dog dog;
    animal = &dog;

    animal->sound(); // Outputs: Dog barks (runtime polymorphism)
    return 0;
}
