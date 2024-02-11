#include<iostream>
using namespace std;

class DM;
class DB
{
public:
    float feet,inch;

    void getdata()
    {
        cout<<"Enter Feet = "<<endl;
        cin>>feet;
        cout<<"Enter Inch = "<<endl;
        cin>>inch;
    }
    friend void addanddisplay (DB,DM);
};

class DM
{
public:
    float meter,centi;
    void getdata()
    {
        cout<<"Enter Meter = "<<endl;
        cin>>meter;
        cout<<"Enter Centimeter = "<<endl;
        cin>>centi;
    }
    friend void addanddisplay (DB,DM);
};

void addanddisplay (DB a,DM b)
{
b.meter=b.meter*3.28;
b.centi=b.centi*0.0328;
a.inch=a.inch*0.0833;
a.feet=a.feet+b.meter+b.centi+a.inch;
cout<<"SUM = "<<a.feet;
}

int main()
{
    DB a;
    DM b;
    a.getdata();
    b.getdata();
    addanddisplay(a,b);
    return 0;
}
