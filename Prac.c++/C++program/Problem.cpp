/*
#include<iostream>
using namespace std;
	
int sum(int a,int b);//function declaration.......................
	
int main()
{
	cout<<"SUM is : "<<sum(1,2)<<endl;
	return 0;
}

sum(int ,int )//function defined.......................
{
	int a,b;
	return a+b;
}





#include<iostream>
using namespace std;

class first
{
	private:
	int a=6;
	public:
		
		cout<<"Class first : "<<a+1<<endl;
};
class second
{
	cout<<"Class second : "<<a+2<<endl;
};

int main()
{
	first x;
	second y;
	return 0;
}



#include<iostream>
using namespace std;


int main ()
{
	int x,y,z,f,g;
cout<<"Addition of two numbers is "<<x+y+z<<".";
    return 0;
}


#include<iostream>
using namespace std;

class first//...........class
{
    cout<<"Addition of two numbers is "<<20+15<<".";
};

int main ()
{
    first obj;
    return 0;
}





#include<iostream>
using namespace std;

class Circle
	{
		private:
			float radius;
		public:
			void area(float r)
				{
					radius = r;//here radius is private acess modifier, it can be access inside its class Circle 
							   //but cannot be access outside its class Cicle so solution is in below........
					double AREA = 3.14*radius*radius;
					cout << "Radius is:" << radius << endl;

				}
	};
	
int main()
	{
		Circle obj;
		obj.area(1.5);
		cout << "Area is: " << AREA;//...................??
		return 0;
	}
	
	
	
	
	



//PROBLEM

#include<iostream>
#include<conio.h>
using namespace std;

class rectangle
{
    //private:
       // int l,b;
    public:
        void getData(int l ,int b)
        {
            cout<<"Enter length and breadth:\n";
            cin>>l>>b; //cascading of input operator
        }

        int  calculate(int l, int b)
        {
            return l*b;
        }
};

int main()
{
        rectangle rect;
        rect.getData();
        cout<<"Area of rectangle is:"<<rect.calculate(); //cascading of output operator
        return 0;
}









//PROBLEM

#include<iostream>
using namespace std;

class rectangle
{
    public:
        int getdata(int l , int b)
         {
             cin>>l>>b;
         }
         int calculate(int l , int b)
         {
            return l*b;
         }
};

int main()
 {
       rectangle rect;
       cout<<"Input lenght and breadth:\n";
       rect.getdata();
       cout<<"Area="<<rect.calculate();
       return 0;
}
*/

/*

//if input 1 space 2 enter see result........
#include<iostream>
using namespace std;

int main()
	{
		int x,y;
		cout<<"Enter x : ";
		cin>>x;
		cout<<"Enter y : ";
		cin>>y;
		cout<<"Result = "<< x+y;
	}
	
	
	
#include<iostream>
using namespace std;

class A
	{
		public:
			int x;	
	};
	
class B:public A
	{
		public:
			getx()
				{
					cout<<"Enter the value of x : ";
					cin>>x;
				}
	};
	
class C
	{
		public:
			int y;
			gety()
				{
					cout<<"ENTER the value of y : ";
					cin>>y;
				}
	};

class D:public B, public C
	{
		public:
			int add;
			void sum()
				{
					add=x+y;
					cout<<"SUM = "<<add;
				}
	};
	
int main()
	{
		D obj;
		obj.getx;
		obj.gety;
		cout<<"SUM = "<<obj.add;
	}
	*/
	
	
	
	
#include<iostream>
using namespace std;

class A
{
};
int main ()
{
	A obj;
	return 0;
}
