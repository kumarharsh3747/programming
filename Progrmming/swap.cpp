#include<iostream>
using namespace std;

int main()
{
    int a=-2,b=7;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<endl<<b;

}