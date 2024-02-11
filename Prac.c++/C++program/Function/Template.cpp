#include <iostream>
using namespace std;


void sum(int a,int b) 
{
    cout<<"Sum="<<a+b<<endl;
}


int main()
{
    int x;
    float y;
    cout<<"Enter one integer data: ";
    cin>>x;
    cout<<"Enter one integer data: ";
    cin>>y;
    sum(x,y); // adding two number of same data type
    return 0;
}




#include <iostream>
using namespace std;

template<class t1,class t2>

void sum(t1 a,t2 b) // defining template function
{
    cout<<"Sum="<<a+b<<endl;
}


int main()
{
    int x;
    float y;
    cout<<"Enter one integer data: ";
    cin>>x;
    cout<<"Enter one float data: ";
    cin>>y;
    sum(x,y); // adding two number of different data type
    return 0;
}
