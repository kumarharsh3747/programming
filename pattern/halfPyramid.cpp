#include<iostream>
using namespace std;

//print half pyramid 

int main(){
      int r;
      cout<<"number of rows"<<endl;
      cin>>r;
      for(int i=1; i<=r; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
      }
    return 0;
}