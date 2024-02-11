/*
#include<iostream>
using namespace std;


int main ()
{
	int x,y,z,f,g;
cout<<"Addition of two numbers is "<<x+y+z<<".";
    return 0;
}
*/



#include<iostream>
using namespace std;

class A
{
	public:
		int a;
		A ()//default constructer
		{
			a=100;
		}
};

class B
{
	public:
		void show()
		{
				cout<<a;
		}
};

int main()
{
	A obj;
	cout<<"a = "<<obj.a;
	B.obj;
	obj.show();
	return 0;
}
