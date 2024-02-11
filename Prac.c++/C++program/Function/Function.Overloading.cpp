//Function Overloading: Different Number of Arguments

/*
#include<iostream>
using namespace std;

int area(int length, int breadth)..........//Two Arguments
{
return (length*breadth);
}
int area(int length)..........//One Arguments
{
return length*length;
}
int main()
{
int sa,ra,l,b;
cout<<"Enter length and breadth of a rectangle:"<<endl;
cin>>l>>b;
ra=area(l,b);
cout<<"Enter length of a side of an square:"<<endl;
cin>>l;
sa=area(l);
cout<<"Area of rectangle:"<<ra<<endl;
cout<<"Area of square:"<<sa<<endl;
return 0;
}
*/





// This program below is same for above problem which runs but logic is wrong according to above...
/*
#include<iostream>
using namespace std;
int area(int x, int y)//..........Two Arguments
{
return (x*y);
}
int area(int z)//..........One Arguments
{
return z*z;
}
int main()
{
int l,b;
cout<<"Enter length and breadth of a rectangle:"<<endl;
cin>>l>>b;//...............line1
cout<<"Enter length of a side of an square:"<<endl;
cin>>l;
cout<<"Area of rectangle:"<<area(l,b)<<endl;//here value of l is taken from the last inputed value of l...which in just above this line..
											// but we needed the value of l from the line1......
cout<<"Area of square:"<<area(l)<<endl;
return 0;
}
*/





//Solution....bye changing the name of argument......
/*
#include<iostream>
using namespace std;
int area(int x, int y)//..........Two Arguments
{
return (x*y);
}
int area(int z)//..........One Arguments
{
return z*z;
}
int main()
{
int l,b,a;
cout<<"Enter length and breadth of a rectangle:"<<endl;
cin>>l>>b;//...............line1
cout<<"Enter length of a side of an square:"<<endl;
cin>>a;
cout<<"Area of rectangle:"<<area(l,b)<<endl;//here function calls the function area  with two argument.......
cout<<"Area of square:"<<area(a)<<endl;//here function calls the function area  with one argument.......
return 0;
}
*/




//Another simple solution for above problrm...
/*
#include<iostream>
using namespace std;
int area(int x, int y)//..........Two Arguments
{
return (x*y);
}
int area(int z)//..........One Arguments
{
return z*z;
}
int main()
{
int l,b;
cout<<"Enter length and breadth of a rectangle:"<<endl;
cin>>l>>b;//...............line1
cout<<"Area of rectangle:"<<area(l,b)<<endl;
cout<<"Enter length of a side of an square:"<<endl;
cin>>l;
cout<<"Area of square:"<<area(l)<<endl;
return 0;
}
*/




//Function Overloading: Different Datatype of Arguments
/*
#include<iostream>
using namespace std;
int mul(int a, int b)
{
return (a*b);
}
float mul(float a, float b)
{
return (a*b);
}
int main()
{
int x=5,y=2;
float n=7.2,m=3.4;
cout<<"Product of integers:"<<mul(x,y)<<endl;
cout<<"Product of reals:"<<mul(n,m)<<endl;
return 0;
}
*/





//Default Arguments
/*
#include<iostream>
using namespace std;
int divide (int a, int b=2)
{
int r;
r=a/b;
return r;
}
int main()
{
cout<<divide(12)<<endl;
cout<<divide(20,4);
return 0;
}
*/


// problem #1
/*
#include<iostream>
using namespace std;
int divide (int a, int b)
{
int r;
r=a/b;
return r;
}
int main()
{
cout<<divide(12)<<endl;// #line 1111  value of b is not passed.........function defination has two numbers of argument...... but function call has one only.....
cout<<divide(20,4);
return 0;
}
*/
//but if no value is given to any of argument then by default its value is 0 as in below code......
/*
#include<iostream>
using namespace std;
int main()
{
	int a;
cout<<a<<endl;// value of b is not passed.........function defination has two numbers of argument...... but function call has one only.....
return 0;
}
*/
// so why didnt  .....problem #1.......  also took default value of b .... #line 1111

//self solutin for this problem....
/*
#include<iostream>
using namespace std;
int divide (int a, int b)
{
int r;
r=a+b;//here is addition instead of  division as in above problem because
	  //when default value 0 of x is passed from the calling fnction to this function defination it solve as infinity so lets cheack in addition
return r;
}
int main()
{
	int x;
	cout<<divide(12,x)<<endl;//here 12 is added with default value of x ehich is 0 and give answer 12 ....12+0=12.....
	cout<<divide(20,4);
return 0;
}
*/

// if division instead of additiion problem of infinity.....
/*
#include<iostream>
using namespace std;
int divide (int a, int b)
{
int r;
r=a/b;
return r;
}
int main()
{
	int x;
	cout<<divide(12,x)<<endl;//here 12 is divided with default value of x which is 0 and give answer infinity ....12/0=infinity.....
	cout<<divide(20,4);
return 0;
}






/*
#include<iostream>
using namespace std;

class apple
{
public:
    void getData(int a,int b)
    {
    	cout<<"Addition of two numbers is "<<a+b<<".";
    }

};

int main ()
{
    apple ape;
    ape.getData(1,2);
    return 0;
}
*/


/*
#include<iostream>
using namespace std;

class apple
{
public:
    void getData(int a,int b,int c)
    {
    	cout<<"Addition of two numbers is "<<a+b+c<<".";
    }

};

int main ()
{
    apple ape;
    ape.getData(1,2,3);
    return 0;
}
*/



/*
#include<iostream>
using namespace std;

class apple
{
public:
    void getData(int a,int b,int c)
    {
    	cout<<"Addition of two numbers is "<<a+b<<".";
    }

};

int main ()
{
    apple ape;
    ape.getData(1,2,3);
    return 0;
}
*/



