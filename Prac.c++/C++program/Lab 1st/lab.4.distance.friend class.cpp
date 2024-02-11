
/*
#include<iostream>
using namespace std;

class A
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
    friend class B;
};

class B
{
public:
    void calculus(A a1,A a2)
    {
        a1.inch=a1.inch+a2.inch;
        a1.feet=a1.feet+a2.feet+a1.inch/12;
        a1.inch=a1.inch%12;
        cout<<"The final distance is "<<a1.feet<<" feet and "<<a1.inch<<" inch.";
    }
};

int main()
{
    A a1,a2;
    B b;
    a1.getdata();
    a2.getdata();
    b.calculus(a1,a2);
    return 0;
}
*/




#include<iostream>
using namespace std;

class A
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
    friend class B;
};

class B
{
    int I,F;
public:
    void calculus(A a1,A a2)
    {
        I=a1.inch+a2.inch;
        F=a1.feet+a2.feet+I/12;
        I=I%12;
        cout<<"The final distance is "<<F<<" feet and "<<I<<" inch.";
    }
};

int main()
{
    A a1,a2;
    B b;
    a1.getdata();
    a2.getdata();
    b.calculus(a1,a2);
    return 0;
}


/*
#include<iostream>
using namespace std;

class A
{
private:
    int age;
    string name;
public:
    void getdata()
    {
        cout<<"Enter Name : "<<endl;
        cin>>name;
        cout<<"Enter Age : "<<endl;
        cin>>age;
    }
    friend class B;
};

class B
{
public:
    void calculus(A aa1,A aa2)
    {
        cout<<"Student named "<<aa1.name<<" of age "<<aa1.age<<" is beanchmate with Student named " <<aa2.name<<" of age "<<aa2.age<<".";
    }
};

int main()
{
    A aa1,aa2;
    B bb;
    aa1.getdata();
    aa2.getdata();
    bb.calculus(aa1,aa2);
    return 0;
}

*/
