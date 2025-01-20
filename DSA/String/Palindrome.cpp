// C++ program to check whether the given string
// is palindrome or not using reverse() function
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

void isPalindrome(string str) {
  
      // Stores the reverse of the string s
    string rev = str;

    // Reverse the string
    reverseString(str);

    // If rev is equal to str
    if (str == rev)
        cout << "\"" << str
          << "\" is palindrome." << endl;
      
    // If rev is NOT equal to str
    else
        cout << "\"" << str
          << "\" is NOT palindrome." << endl;
}

int main() {
    
      // Checking if strings given strings are palindrome
    isPalindrome("ABCDCBA");
      isPalindrome("ABCD");

    return 0;
}