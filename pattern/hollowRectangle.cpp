#include<iostream>
using namespace std;
//print hollow rectangle
int main(){

    int r,c;
    cout<<"enter the row"<<endl;
    cin>>r;
    cout<<"enter the column"<<endl;
    cin>>c;
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            if(i==1 || i==r ||j==1 || j==c)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}