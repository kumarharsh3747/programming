/*Hierarchical Inheritance:
Multiple child classes inherit from a single parent class.*/

#include<iostream>
using namespace std;
class Parent {
public:
    void show() {
        cout << "Parent class function" << endl;
    }
};

class Child1 : public Parent {
};

class Child2 : public Parent {
};

int main() {
    Child1 obj1;
    Child2 obj2;
    obj1.show();
    obj2.show();
    return 0;
}
