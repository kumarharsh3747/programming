/*Pure Virtual Functions and Abstract Classes:

Used to define a common interface for derived classes.*/

#include<iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

int main()
{
    Circle c1;
    c1.draw();
 return 0;
}