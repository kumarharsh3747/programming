/*Multilevel Inheritance:
A chain of inheritance where a class derives from another derived class.*/

#include<iostream>
using namespace std;
class GrandParent {
public:
    void show() {
        cout << "Grandparent class function" << endl;
    }
};

class Parent : public GrandParent {
};

class Child : public Parent {
};

int main() {
    Child obj;
    obj.show();
    return 0;
}
