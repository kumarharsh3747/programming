#include<iostream>
using namespace std;

//print inverted half pyramid

int main(){
    int r;
    cin>>r;
    for(int i=r; i>=1; i--){
        for(int j=1; j<=i; j++ ){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}