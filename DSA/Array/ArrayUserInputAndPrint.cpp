#include<iostream>
using namespace std;


int main()
{
    int* arr;
    int n;

    arr= new int[n]; // dynamic memory allocation for array

    cout<<"Size of an array: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Enter Elements at index "<<i<<":";
        cin>>arr[i];
    }
    cout<<"You Entered, Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    delete[] arr; // Free dynamically allocated memory
 return 0;
}