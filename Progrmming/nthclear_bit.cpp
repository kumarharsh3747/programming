#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int k=1;
    
    a=a&~(1<<k);
    cout<<a;

}