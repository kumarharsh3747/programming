#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;

    return fibonacci(n-1) + fibonacci(n-2);
}

void fibonacciSeries(int count, int current=0){
    if(current>=count){
        return;
    }
    cout<< fibonacci(current)<<" ";
    fibonacciSeries(count,current+1);
    
}

int main(){
    fibonacciSeries(10);
    return 0;
}