/*Function Overloading:

Allows multiple functions with the same name but different parameters.*/

#include<iostream>
using namespace std;

class calculator{
    public:
    int add(int x, int y){
        int z= x+y;
        return z;
    }

    double add(double x, double y){
        double z= x+y;
        return z;
    }

};

int main()
{
    calculator c1;
    cout<<c1.add(5,6)<<endl;
    cout<<c1.add(5.2,6.3);
 return 0;
}