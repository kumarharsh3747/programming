#include<iostream>
using namespace std;
int main()
{
    int num[] = {1,0,1,0};
    int i,b=1,sum=0;
    for(i=3;i>0;i--)
    {
        sum +=num[i]*b;
        b=b*2;
    }
    cout<<"the no is   "<<sum;
}