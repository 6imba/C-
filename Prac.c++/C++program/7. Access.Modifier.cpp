
/*
//Addition without class & and object.................
#include<iostream>
using namespace std;

 void add(int a,int b)
    {
    	cout<<"Addition of two numbers is "<<a+b<<".";
    }

int main ()
{
	add(20,15);
    return 0;
}
*/


//class and object...............
/*
#include<iostream>
using namespace std;

class solution // class
{
	//class members
	public:
		
	int a,b;//data member
	
	void add (int a,int b)// member function
	{
		cout<<a+b;
	}
};

int main ()
{
	solution obj;
	obj.add(2,3);
	return 0;
}
*/




//problem ...........class and object.........
//In class and object class members i.e.(function member or data member) are private by default.....
//So class members cannot be access outside the class......
/*
#include<iostream>
using namespace std;

class first//...........class
{
    void add(int a,int b)//........class members is private by default.....
    {
    	cout<<"Addition of two numbers is "<<a+b<<".";
    }

};

int main ()
{
    first obj;
    obj.add(20,15);//So class members i.e(function add) cannot be access outside the class......
    return 0;
}
*/





/*
//Therfore solution for above problem is................
#include<iostream>
using namespace std;

class first
{
	public:
    void add(int a,int b)
    {
    	cout<<"Addition of two numbers is "<<a+b<<".";
    }

};

int main ()
{
    first obj;
    obj.add(20,15);
    return 0;
}
*/



/*
#include<iostream>
using namespace std;

class first
{
	public:
    void add(int a,int b)
    {
    	cout<<"Addition of two numbers is "<<a+b<<".\n";
    }
    void subtract(int a,int b)
    {
    	cout<<"Subtraction of two numbers is "<<a-b<<".";
    }

};

int main ()
{
    first obj;
    obj.add(20,15);
    obj.subtract(20,15);
    return 0;
}
*/





/*
#include<iostream>
using namespace std;

class apple
{
private:
    int x,y;
public:
    void getData(int a,int b)
    {
        x=a;
        y=b;
    }
    void add()
    {
    	cout<<"Addition of two numbers is "<<x+y<<".";
    }
    void subtract()
    {
    	cout<<"Subtraction of two numbers is "<<x-y<<".";
    }
};

int main ()
{
    apple obj;
    obj.getData(20,30);
    obj.add();
    obj.subtract();
    return 0;
}
*/



/*
#include<iostream>
using namespace std;

class apple
{
private:
    int x,y;
public:
    void getData(int a,int b)
    {
        x=a;
        y=b;
    }
    void sumdisplay()
    {
        cout<<"Addition of two numbers is "<<x+y<<".\n";
      	cout<<"Addition of two numbers is "<<x+y<<'.';
      	//here '' can store only one term.
      	//also try belowes;
      	cout<<"\nAddition of two numbers is "<<x+y<<"   "<<'.....';
      	cout<<"\nAddition of two numbers is "<<x+y<<" .1.2.3. "<<'123123';
      	cout<<"\nAddition of two numbers is "<<x+y<<"   "<<' ascasc';
    }
};

int main ()
{
    apple obj;
    obj.getData(20,30);
    obj.sumdisplay();
    return 0;
}
*/



/*
#include<iostream>
using namespace std;

class apple
{
private:
    int x,y,z;
public:
    void getData(int a,int b)
    {
        x=a;
        y=b;
    }
    void sumdisplay()
    {
        z=x+y;//here u can that z is a private acess modifier and it can be access anywhere inside its class..... but not outside its class.....
        
      cout<<"Addition of two numbers is "<<z<<'.';
    }
};

int main ()
{
    apple ape;
    ape.getData(20,30);
    ape.sumdisplay();
    //cout<<"Value of z is "<<z<<'.';//here z is private acess modifier so it cannot be access outside its class apple........
    return 0;
}
*/



//Public Access Modifier.........................
/*
#include<iostream>
using namespace std;

class Circle
	{
		public:
			float radius;
		int area()
			{
				return 3.14*radius*radius;
			}	
	};
int main()
	{
		Circle obj;
		cout<<"Enter radius : ";
		cin>>obj.radius;//here radius is public so it can be access outside the class..............................
		cout << "Radius is:" << obj.radius << "\n";
		cout << "Area is:" << obj.area();
		return 0;
	}
*/




//Private Access Modifier.........................
/*
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
					cout << "Area is: " << AREA;
				}
	};
	
int main()
	{
		Circle obj;
		obj.area(1.5);
		return 0;
	}
*/	


/*	
#include<iostream>
using namespace std;

class apple
{
private:
    int x,y;
public:
    void getData(int a,int b)
    {
        cout<<"Addition of two numbers a and b is "<<a+b<<".\n";
        x=a/2;
        y=b/2;
    }
    void sumdisplay()
    {
      cout<<"Addition of two numbers x and y is "<<x+y<<",where x=a/2 and y=b/2.";
    }
};

int main ()
{
    apple ape;
    ape.getData(20,30);
    ape.sumdisplay();
    return 0;
}
*/



/*
#include<iostream>
using namespace std;

class calculus

{
public:
        void sum(int a,int b)
        {
            cout<<"Addition="<<a+b<<".\n";
        }
        void dif(int a,int b)
        {
            cout<<"Difference="<<a-b<<".\n";
        }
        void mul(int a,int b)
        {
            cout<<"Product="<<a*b<<".\n";
        }
        void div(int a,int b)
        {
            cout<<"Division="<<a/b<<".\n";
        }
};
int main()
{
    calculus soln;
    soln.sum(8,2);
    soln.dif(8,2);
    soln.mul(8,2);
    soln.div(8,2);
    return 0;
}
*/



/*	
#include<iostream>
using namespace std;

class calculus

{
private:
    int x,y;
public:
        void getData(int a,int b)
        {
            x=a;
            y=b;
        }
        void sum()
        {
            cout<<"Addition="<<x+y<<".\n";
        }
        void dif()
        {
            cout<<"Difference="<<x-y<<".\n";
        }
        void mul()
        {
            cout<<"Product="<<x*y<<".\n";
        }
        void div()
        {
            cout<<"Division="<<x/y<<".\n";
        }
};
int main()
{
    calculus soln;
    soln.getData(8,2);
    soln.sum();
    soln.dif();
    soln.mul();
    soln.div();
    return 0;
}
*/
	
/*	
#include<iostream>
using namespace std;

class rectangle
{
    private:
        int l,b;

    public:
        int calculate()
         {
             cin>>l>>b;
             cout<<"\nArea of reactangle:"<<l*b;
         }
};

int main()
 {
       rectangle rect;

        cout<<"Input lenght and breadth : ";
        rect.calculate();
       return 0;
}
*/
	
	
	
//Protected Access Modifier..............
	
/*	
#include <iostream>
using namespace std;

class Parent//Parent class or Base class 
	{
		protected:
			int a,b=4;
	};

class Child : public Parent//Child class or sub class or derived class
	{
		public:
			void add(int x,int y)
				{
					a = x+y;
				}

			void display()
				{
					cout << "Addition of x,y stored in a and added with b is:" << a+b << endl;
				}

	};

int main() 
{
	Child obj1;
	obj1.add(2,3);
	obj1.display();
	return 0;
}
*/



#include<iostream>
using namespace std;

class A
{
	protected:
	int x=3;
};

class B:public A
{
	public:
		void show()
		{
				cout<<x+2;
		}	
};

class C:public A
{
	public:
		void show()
		{
				cout<<x+3;
		}
};

int main()
{
	B obj;	
	obj.show();
	C obj2;	
	obj2.show();
	return 0;
}







