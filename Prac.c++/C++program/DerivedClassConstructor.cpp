/*
#include<iostream>
using namespace std;

class A
{
	public:
		int a;
		A(int x)
		{
			a=x;
		}
};

class B:public A
{
	public:
		int b;
		B(int p,int q):A(p)
		{
			b=q;
		}
		void display()
		{
			cout<<"a : "<<a<<endl;
			cout<<"b : "<<b<<endl;
		}
};

int main ()
{
	B obj(2,3);
	obj.display();
	return 0;
}
*/







#include<iostream>
using namespace std;

class A
{
	public:
		int a,j;
		A(int x,int y)
		{
			a=x;
			j=y;
		}
};

class B:public A
{
	public:
		int b;
		B(int p,int r,int q):A(p),A(r)
		{
			b=q;
		}
		void display()
		{
			cout<<"a : "<<a<<endl;
			cout<<"b : "<<b<<endl;
			cout<<"c : "<<c<<endl;
		}
};

int main ()
{
	B obj(2,3,4);
	obj.display();
	return 0;
}
