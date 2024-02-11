#include<iostream>
using namespace std;
class A
{
public:
void show ()
{
cout<<"From Class A"<<endl;
}
};
class B
{
public:
void show ()
{
cout<<"From Class B";
}
};
class C: public A, public B
{
};
int main ()
{
C obj;
//obj.show (); //ambiguous
obj.A::show(); // Ok
obj.B::show(); // Ok
return 0;
}
