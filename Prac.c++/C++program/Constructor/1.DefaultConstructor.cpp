// Constructors is a special member function of a class that is executed for setting initial values for certain member variables.
//the initialized value is access with in the same class only.....


//Default constructor


// #include<iostream>
// using namespace std;

// class A
// {
// 	public:
// 		int a;
// 		A ()//default constructer
// 		{
// 			a=100;
// 		}
// };

// int main()
// {
// 	A obj;
// 	cout<<"a = "<<obj.a;
// 	return 0;
// }



/*
#include<iostream>
using namespace std;

class A
{
	public:
		int a;
			A ()//default constructer
			{
				//a;//also try it
			}
};

int main()
{
	A obj;
	cout<<"a = "<<obj.a;//by default in compiler the value of any varaible is 0...........
	return 0;
}
*/






// in above program we built a contructor called A but inside that constrcutor there was no any varaible initialized 
//so we no need to built a constructor because by default in compiler the value of any varaible is 0...........

/*
#include<iostream>
using namespace std;

class A
{
	public:
		int a;
};

int main()
{
	A obj;
	cout<<"a = "<<obj.a;
	return 0;
}
*/



//0 or any random varaible will be output////

#include<iostream>
using namespace std;

class Cube
{
public:
int side,apple;
float boat;
};
int main()
{
Cube c;
cout << c.side<<endl;
cout << c.apple<<endl;
cout << c.boat;
}

