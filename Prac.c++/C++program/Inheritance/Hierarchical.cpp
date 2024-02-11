
#include<iostream>
using namespace std;

class A
{
	public:
		int x,y;
		void getdata()
		{
			cout<<"Enter value of x and y : ";
			cin>>x>>y;
		}
		
};

class B:public A
{
	public:
		int product;
		void doproduct()
		{
			product=x*y;
			cout<<"Product = "<<product<<endl;
		}
		
};

class C:public A
{
	public:
		void dosum()
		{
			cout<<"Sum = "<<x+y<<endl;
		}
		
};

class D:public A
{
	public:
		void dosub()
		{
			cout<<"Difference = "<<x-y;
		}
		
};

int main ()
{
	B obj1;
	obj1.getdata();
	obj1.doproduct();
	C obj2;
	obj2.getdata();
	obj2.dosum();
	D obj3;
	obj3.getdata();
	obj3.dosub();
	return 0;
}





/*
#include<iostream>
using namespace std;

class A
{
	public:
		int x,y;
		void getdata()
		{
			cout<<"Enter value of X and Y : ";
			cin>>x>>y;
		}
		
};

class B:public A
{
	public:
		void do1()
		{
			cout<<"X = "<<x<<endl;
		}
		
};

class C:public A
{
	public:
		void do2()
		{
			cout<<"Y = "<<y<<endl;
		}
		
};

class D:public A
{
	public:
		void do3()
		{
			cout<<"XY = "<<x<<y;
		}
		
};

int main ()
{
	B obj1;
	obj1.getdata();
	obj1.do1();
	C obj2;
	obj2.getdata();
	obj2.do2();
	D obj3;
	obj3.getdata();
	obj3.do3();
	return 0;
}
*/


