
#include<iostream>
using namespace std;

class A
{
	public:
		int x;
		void getdata()
		{
			cout<<"Enter value of x : "<<endl;
			cin>>x;
		}
		
};

class B:public A
{
	public:
		int y;
		void readdata()
		{
			cout<<"Enter value of y : "<<endl;
			cin>>y;
		}
					
};

class C:public B
{
	public:
		int z;
		void indata()
		{
			cout<<"Enter value of z : "<<endl;
			cin>>z;
		}
			
};

class D:public C
{
	public:
		int j;
		void data()
		{
			cout<<"Enter value of j : "<<endl;
			cin>>j;
		}
		void add()
		{
			cout<<"Add = "<<x+y+z+j;
		}	
};

int main ()
{
	D obj1;
	obj1.getdata();
	obj1.readdata();
	obj1.indata();
	obj1.data();
	obj1.add();
	return 0;
}





/*
#include<iostream>
using namespace std;

class A
{
	public:
		int x;
		void getdata()
		{
			cout<<"Enter value of x : "<<endl;
			cin>>x;
		}
		
};

class B:public A
{
	public:
		int y;
		void readdata()
		{
			cout<<"Enter value of y : "<<endl;
			cin>>y;
		}
					
};

class C:public B
{
	public:
		int z;
		void indata()
		{
			cout<<"Enter value of z : "<<endl;
			cin>>z;
		}
			
};

class D:public C
{
	public:
		int j;
		void data()
		{
			cout<<"Enter value of j : "<<endl;
			cin>>j;
		}
		void product()
		{
			cout<<"Product = "<<x*y*z*j;
		}	
};

int main ()
{
	D obj1;
	obj1.getdata();
	obj1.readdata();
	obj1.indata();
	obj1.data();
	obj1.product();
	return 0;
}
*/




#include<iostream>
using namespace std;

class A
{
	public:
		int x;
		void getdata()
		{
			cout<<"Enter value of x : "<<endl;
			cin>>x;
		}
		
};

class B:public A
{
	public:
		int y;
		void readdata()
		{
			cout<<"Enter value of y : "<<endl;
			cin>>y;
		}
					
};

class C:public B
{
	public:
		int z;
		void indata()
		{
			cout<<"Enter value of z : "<<endl;
			cin>>z;
		}
			
};

class D:public C
{
	public:
		int j;
		void data()
		{
			cout<<"Enter value of j : "<<endl;
			cin>>j;
		}
		void calculus()
		{
			cout<<"Ans = "<<x*y+z-j;
		}	
};

int main ()
{
	D obj1;
	obj1.getdata();
	obj1.readdata();
	obj1.indata();
	obj1.data();
	obj1.calculus();
	return 0;
}





