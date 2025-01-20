#include<iostream>
using namespace std;

int sumOfArray(int arr[], int size ){

    if(size==0){
        return 0;
    }

    return arr[size-1]+sumOfArray(arr,size-1);
}

int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<sumOfArray(arr,5);
 return 0;
}