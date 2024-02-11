
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
    void add()
    {
        sum=x+y;
        cout<<"SUM = "<<sum;
    }
};

int main()
{
    B obj;
    obj.getx();//here getx() is in class A and obj is object of class B ....
			   //in general one class cannot access object of another class but as here it is single inheretance.....
			   //SO,class B(derived class OR sub class) can access member of class A (super class OR base class)
    obj.gety();
    obj.add();
    return 0;
}
*/


/*
#include<iostream>
using namespace std;

class A //superclass OR baseclass
{
public:
    int x,y;
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
    int sum;
    void gety()
    {
        cout<<"Enter value of y:"<<endl;
        cin>>y;
    }
    void add()
    {
        sum=x+y;
        cout<<"SUM = "<<sum;
    }
};

int main()
{
    B obj;
    obj.getx();//here getx() is in class A and obj is object of class B ....
			   //in general one class cannot access object of another class but as here it is single inheretance.....
			   //SO,class B(derived class OR sub class) can access member of class A (super class OR base class)
    obj.gety();
    obj.add();
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
    void getx()
    {
        cout<<"Enter value of x:"<<endl;
        cin>>x;
    }
};

class B : public A
{
public:
	void out()
    {
        cout<<"The entered value is :"<<x<<endl;
    }
};

int main()
{
    B obj;
    obj.getx();
    obj.out();
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
    void getx()
    {
        cout<<"Enter value of x:"<<endl;
        cin>>x;
    }
};

class B : public A
{
public:
    int y;
    void gety()
    {
        cout<<"Enter value of y:"<<endl;
        cin>>y;
    }
    void add()
    {
        cout<<"SUM = "<<x+y;
    }
};

int main()
{
    B obj;
    obj.getx();
    obj.gety();
    obj.add();
    return 0;
}
*/
