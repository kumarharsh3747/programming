/*Single Inheritance:
A child class inherits from a single parent class.*/

#include<iostream>
using namespace std;

class parent{
    public:
    void show(){
        cout<<"parent Class"<<endl;
    }
};
class child : public parent{
    public:
    void display(){
        cout<<"child class"<<endl;
    }

};
int main()
{
    child c1;
    c1.show();
 return 0;
}