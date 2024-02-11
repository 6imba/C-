#include<iostream>
using namespace std;

class Distance
{
    int feet,inch;
public:
    Distance()
    {
        feet=0;
        inch=0;
    }
    Operator float()
    {
        return (feet+inch/12.0);
    }
};

int main ()
{
        Distance d(12,7);
        float x=d;
        cout<<"Value of x is : "<<x;
        return 0;

}
