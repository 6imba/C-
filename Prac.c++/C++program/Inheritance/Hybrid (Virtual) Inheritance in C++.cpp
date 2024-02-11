//Hybrid (Virtual) Inheritance in C++
/*
#include <iostream>
using namespace std;

class A
	{
		public:
			int x;
	};
	
class B : public A
	{
		public:
			B() //constructor to initialize x in base class A
				{
					x = 10;
				}
	};
	
class C
	{
		public:
			int y;
			C() //constructor to initialize y
				{
					y = 4;
				}
	};
	
class D : public B, public C //D is derived from class B and class C
	{
		public:
			void sum()
				{
					cout << "Sum= " << x + y;
				}
	};
	
int main()
	{
	D obj1; //object of derived class D
	obj1.sum();
	return 0;
	}
*/


/*
#include<iostream>
using namespace std;

class A
	{
		public:
			int x;	
	};
	
class B:public A//single inhheritance
	{
		public:
			B()
				{
					x=3;
				}
	};
	
class C
	{
		public:
			int y;
			C()
				{
					y=5;
				}
	};

class D:public B, public C//multiple in heritance
	{
		public:
			void sum()
				{

					cout<<"SUM = "<<x+y;
				}
	};
	
int main()
	{
		D obj;
		obj.sum();
	}
*/



/*
#include<iostream>
using namespace std;

class A //superclass OR baseclass
{
public:
    int x;
    void getx()
    {
        cout<<"Enter value of x:"<<endl;
        cin>>x;
    }
};

//subclass OR derivedclass

class B : public A
{
public:
    int y,sum;
    void gety()
    {
        cout<<"Enter value of y:"<<endl;
        cin>>y;
    }
};
	
class C
	{
		public:
			int z;
			C()
				{
					z=5;
				}
	};

class D:public B, public C//multiple in heritance
	{
		public:
			void sum()
				{

					cout<<"SUM = "<<x+y+z;
				}
	};
	
int main()
	{
		D obj;
		obj.getx();
		obj.gety();
		obj.sum();
	}

*/



