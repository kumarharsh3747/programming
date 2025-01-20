#include<iostream>
using namespace std;

int main()
{
    int XOR=0;
    int ar[]={10,5,15,5,10,2,15};
    for (int i=0; i<7;i++)
    {
        XOR= XOR^ar[i];
    }
    cout<<XOR;

}