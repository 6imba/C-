/*
#include<iostream>
using namespace std;

class Distance
{
private:
        int feet,inch;
public:

    void getdata()
    {
        cout<<"Enter feet : "<<endl;
        cin>>feet;
        cout<<"Enter inch : "<<endl;
        cin>>inch;
    }
    friend void display(Distance,Distance);
    friend void calculus(Distance,Distance);
};
    void display(Distance a1,Distance a2)
    {
        cout<<"\n\nGiven Feet : "<<a1.feet;
        cout<<"\nGiven Inch : "<<a1.inch;
        cout<<"\nGiven Feet : "<<a2.feet;
        cout<<"\nGiven Inch : "<<a2.inch;
    }

    void calculus(Distance a1,Distance a2)
    {
        a1.inch=a1.inch+a2.inch;
        a1.feet=a1.feet+a2.feet+a1.inch/12;
        a1.inch=a1.inch%12;
        cout<<"\n\nThe final distance is "<<a1.feet<<" feet and "<<a1.inch<<" inch.";
    }
int main()
{
    Distance a1,a2;
    a1.getdata();
    a2.getdata();
    display(a1,a2);
    calculus (a1,a2);
    return 0;
}
*/



#include<iostream>
using namespace std;

class Distance
{
private:
public:
    int feet,inch;
    void getdata()
    {
        cout<<"Enter feet : "<<endl;
        cin>>feet;
        cout<<"Enter inch : "<<endl;
        cin>>inch;
    }
    friend void display(Distance,Distance);
    friend void calculus(Distance a1,Distance a2);
};
    void display(Distance a1,Distance a2)
    {
        cout<<"\n\nGiven Feet : "<<a1.feet;
        cout<<"\nGiven Inch : "<<a1.inch;
        cout<<"\nGiven Feet : "<<a2.feet;
        cout<<"\nGiven Inch : "<<a2.inch;
    }

    void calculus(Distance a1,Distance a2)
    {
        Distance D;
        D.inch=a1.inch+a2.inch;
        D.feet=a1.feet+a2.feet+D.inch/12;
        D.inch=D.inch%12;
    }

    void result(Distance D)
    {
             cout<<"\n\nThe final distance is "<<D.feet<<" feet and "<<D.inch<<" inch.";
    }

int main()
{
    Distance a1,a2,a3;
    a1.getdata();
    a2.getdata();
    display(a1,a2);
    calculus (a1,a2);
    result(a3);
    return 0;
}
