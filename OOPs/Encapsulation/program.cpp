#include<iostream>
using namespace std;

class Student{
    private:
    int age;
    public:
            string name;
            string dept;
            void display(){
                name="Harsh Kumar";
                dept="CSE";
                cout<<name<<endl<<dept<<endl;
            }
            void setAge(int age){
                this-> age = age;
            }
            int getAge(){
                return age;
            }
};

int main()
{
    Student S1;
    S1.display();
    S1.setAge(22);
    cout<<S1.getAge();
 return 0;
}