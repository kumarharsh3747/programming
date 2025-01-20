/*Multiple Inheritance:
A child class inherits from more than one parent class.*/

#include<iostream>
using namespace std;

class parent1{
    public:
    void display1(){
        cout<<"Parent1"<<endl;
    }
};
class parent2{
    public:
    void display2(){
        cout<<"Parent2"<<endl;
    }

};

class child: public parent1, public parent2{
    public:
    void show(){
        cout<<"Hey, I am a child";
    }

};
int main()
{
    child c1,c2;
    c1.display1();
    c2.display2();
    c1.show();

 return 0;
}