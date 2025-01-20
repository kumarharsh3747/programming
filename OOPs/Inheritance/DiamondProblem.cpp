/*Key Challenge: The Diamond Problem
When multiple derived classes inherit from the same base class, and another class inherits from these derived classes, the base class members can be inherited multiple times, leading to redundancy and ambiguity.

Diamond Problem Structure
css
Copy
Edit
      A
     / \
    B   C
     \ /
      D
Here, D inherits two copies of A (one via B and another via C).

Solution: Virtual Inheritance
Virtual inheritance ensures only one copy of the base class is inherited.

*/

#include <iostream>
using namespace std;

// Base class with virtual inheritance
class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

// Intermediate base classes
class B : virtual public A {
};

class C : virtual public A {
};

// Derived class
class D : public B, public C {
};

int main() {
    D obj;

    // No ambiguity
    obj.showA();  // Class A (single copy via virtual inheritance)

    return 0;
}


/*Key Points
Virtual Inheritance:

Prevents multiple copies of the base class.
Resolves ambiguity in hybrid inheritance.
Syntax for Virtual Inheritance:

class Derived : virtual public Base {};
When to Use:

Use virtual inheritance in designs prone to the diamond problem.
*/