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

class B
{
public:
    int y;
    void gety()
    {
        cout<<"Enter value of y:"<<endl;
        cin>>y;
    }
};

class C : public A,public B
{
public:
    int sum;
    void add()
    {
        sum=x+y;
        cout<<"SUM = "<<sum;
    }
};

int main()
{
    C obj;
    obj.getx();
    obj.gety();
    obj.add();
    return 0;
}






