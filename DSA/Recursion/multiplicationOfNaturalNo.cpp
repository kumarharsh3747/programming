#include<iostream>
using namespace std;

int mult(int num){
    if(num == 1) return 1;

return num * mult(num-1);
}
int main()
{
    int n;
    cout<<"enter the number :";
    cin>>n;
    cout << "Multiplication of first " << n << " natural numbers is: " <<mult(n);
 return 0;
}