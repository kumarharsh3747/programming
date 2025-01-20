#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;
    cout<<"Input the size of the array:";
    cin>>n;
    cout<<"Enter array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Entered array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";

    }
    int pos, value;
    cout<<"\nenter position: ";
    cin>>pos;
    

    if(pos<0 || pos>n){
        cout<<"Invalid position"<<endl;
        return 0;
    }
    cout<<"Enter value: ";
    cin>>value;

    //shift elements to right
    for(int i=n; i>pos; i--){
        arr[i]= arr[i-1];
    }
    arr[pos]= value;
    n++;

     // Display the array
    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
 return 0;
}