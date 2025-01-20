#include<iostream>
using namespace std;

//pattern to print solid rectangle

int main(){

    int r,c;
    cout<<"enter the number of rows"<<endl;
    cin>>r;
    cout<<"enter the number of columns"<<endl;
    cin>>c;
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++ ){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}