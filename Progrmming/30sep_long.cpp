#include<iostream>
using namespace std;
int main()
{
    int i,sum=0;
    int arr[]={1,2,3,4,6};
    for(i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }

    for(i=0;i<5;i++)
    {
    if(sum%2==0)
    {
        arr[i]=0;
    }
    else 
    {
        arr[i]=1;
    }
    }    

for(i=0;i<5;i++)
{
    cout<<arr[i];
}

}