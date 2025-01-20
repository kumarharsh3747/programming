#include<iostream>
using namespace std;

class Student{
    public:
            string name;
            string dept;
            void display(){
                name="Harsh Kumar";
                dept="CSE";
                cout<<name<<endl<<dept;
            }
};

int main()
{
    Student S1;
    S1.display();
 return 0;
}