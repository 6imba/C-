#include <iostream>
using namespace std;

void exchange(int &a, int &b)
{
int temp;
temp=a;
a=b;
b=temp;
cout<<"Value of a:"<<a<<endl;
cout<<"Value of b:"<<b<<endl;
}
int main()
{
int x=5,y=3;
exchange(x,y);
cout<<"Value of X:"<<x<<endl;
cout<<"Value of Y:"<<y<<endl;
return 0;
}

