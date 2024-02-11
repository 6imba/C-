//Normal Addition of two numbers....

#include<iostream>
using namespace std;
		
int main()
{
	int a,b;
	cout<<"Enter two number : ";
	cin>>a>>b;
	cout<<"Addition of two numbers, a and b is:" << a+b<<endl;
	return 0;
}


//user defined function......
/* 
#include<iostream>
using namespace std;
	
int getdata(int a);//function declaration.......................
	
int main()
{
	int a,x;
	x=getdata( a );//function call.......................
	cout<<"Numbers is : " <<x<<endl;
	return 0;
}

getdata(int a)//function defined.......................
{
	cout<<"Enter  number : ";
	cin>>a;
	return a;
}
*/




//user defined function......SUM......
/*
#include<iostream>
using namespace std;
	
int sum(int a,int b);//function declaration.......................
	
int main()
{
	int a,b,x;
	cout<<"Enter two number : ";
	cin>>a>>b;
	x=sum(a,b);//function call.......................
	cout<<"SUM is : "<<x<<endl;
	return 0;
}

sum(int a,int b)//function defined.......................
{
	return a+b;
}
*/


//With Class this is wrong
/*
#include<iostream>
using namespace std;

class A
{
	private:
		int a,b;
	public:
		cout<<"Enter two number : ";
		cin>>a>>b;
		cout<<"Addition of two numbers, a and b is:" << a+b<<endl;
};
*/

//With Class this is proper way.WiTH class their needs funtion......
/*
#include<iostream>
using namespace std;
class Test
{
	private:
		int a,b;
	public:
		void getData()//funtion.....
		{
		cout<<"Enter two number a and b : ";
		cin>>a>>b;
		cout<<"Addition of two numbers, a and b is:" << a+b<<endl;
		}
};
		
int main()
{
	Test obj;
	obj.getData();
	return 0;
}
*/


//With Class and funtion with its one of the type........
/*
#include<iostream>
using namespace std;
class Test
{
	public:
		void getData(int p, int q)
		{
		cout<<"Addition of two numbers, p and q is:" << p+q<<endl;
		}
};
		
int main()
{
	Test obj;
	obj.getData(10,20);
	return 0;
}
*/

//Extra ***************
/*
#include<iostream>
using namespace std;
class Test
{
	private:
		int a, b;
	public:
		void getData(int p, int q)
		{
		a=p;
		b=q;
		}
		void display()
		{
		cout<< "Addition of two numbers a and b is:"<< a+b ;
		}
};
		
int main()
{
	Test obj;
	obj.getData(10,20);
	obj.display();
	return 0;
}
*/


/*
#include<iostream>
using namespace std;

class calculate

{

public:

    int sum(int a, int b)
    {
        return a+b;
    }

    int diff(int a, int b)
    {
        return a-b;
    }
};

int main()
{
    calculate JX;
    cout<<JX.sum(5,3);
    cout<<"\n"<<JX.diff(4,2);
}
*/



/*
#include<iostream>
using namespace std;

class calculate

{
private:
    int x,y;

public:

    int sum(int a, int b)
    {
        x=a;
        y=b;
        return x+y;
    }

    int diff()
    {
        return x-y;
    }

    int mul()
    {
        return x*y;
    }

    int div()
    {
        return x/y;
    }

    int rem()
    {
        return x%y;
    }
};

int main()
{
    calculate JX;
    cout<<"Sum="<<JX.sum(5,3);
    cout<<"\n Difference="<<JX.diff();
    cout<<"\n Product="<<JX.mul();
    cout<<"\n Division="<<JX.div();
    cout<<"\n"<<" Remainder="<<JX.rem();
}
*/




