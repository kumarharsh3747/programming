#include<iostream>
using namespace std;

int main()
{
    int a=11;
    int k=1;
    if(a&(1<<k))
    {
        cout<<"1";
    }
    else
    {
        cout<<"0";
    }
}