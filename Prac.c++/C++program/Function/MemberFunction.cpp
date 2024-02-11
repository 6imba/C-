//Defining Member Functions

//Inside the class definition

/*
#include<iostream>
using namespace std;

class sum
{
private:
int A, B, total;
public:
void getdata ()
{
cout<<"\n Enter the value of A and B : ";
cin>>A>>B;
}
void display ()
{
total = A+B;
cout<<"\n The Sum of A and B = "<<total;
}
};
int main ()
{
sum a;
a.getdata ();
a.display ();
return 0;
}
*/


//Outside the class definition
/*
#include<iostream>
using namespace std;
class sum
{
int A, B, total;
public:
void getdata ();
void display ();
};
void sum:: getdata ()
{
cout<<" \n Enter the value of A and B : "<<endl;
cin>>A>>B;
}
void sum:: display ()
{
total =A+B;
cout<<"\n The Sum of A and B = "<<total;
}
int main ()
{
sum a;
a.getdata ();
a.display ();
return 0;
}
*/

//Syntax
/*
return_type class_name:: function_name (argument list)
{
/ /function body
}
*/
