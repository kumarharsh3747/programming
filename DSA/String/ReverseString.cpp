#include<iostream>
#include<string>
using namespace std;

void reverseString(string &str){
    int start=0;
    int end= str.length() -1;
    while(start<end){
        str[start]= str[start]+ str[end];
        str[end]=str[start]-str[end];
        str[start]=str[start]-str[end];

        start++;
        end--;
    }
}

int main()
{ 
    string str ="harsh";
    reverseString(str);
    cout<<str;

 return 0;
}