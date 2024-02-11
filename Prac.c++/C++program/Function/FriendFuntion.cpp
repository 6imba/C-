/*
#include<iostream>
using namespace std;

class son;
class father
{
    int salary;
public:
    void getsalary()
    {
        cout<<"Enter salary of Father = "<<endl;
        cin>>salary;
    }
    friend void comparision (father,son);
};

class son
{
    int fee;
public:
    void getfee()
    {
        cout<<"Enter son fee = "<<endl;
        cin>>fee;
    }
    friend void comparision (father,son);
};

void comparision (father f,son s)
{
    if(f.salary>s.fee)
        cout<<"Family is Happy!";
    else
        cout<<"Family is Not happy!";
}

int main()
{
    father f;
    son s;
    f.getsalary();
    s.getfee();
    comparision(f,s);
    return 0;
}
*/

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
    friend void calculus(A a1,A a2); //friend void calculus(A ,A );
};

    void calculus(A a1,A a2)
    {
        a1.inch=a1.inch+a2.inch;
        a1.feet=a1.feet+a2.feet+a1.inch/12;
        a1.inch=a1.inch%12;
        cout<<"The final distance is "<<a1.feet<<" feet and "<<a1.inch<<" inch.";
    }

int main()
{
    A a1,a2;
    a1.getdata();
    a2.getdata();
    calculus(a1,a2);
    return 0;
}
*/


/*
#include<iostream>
using namespace std;

class son;
class father
{
private:
    int salary;
public:
    void getsalary()
    {
        cout<<"Enter salary of Father = "<<endl;
        cin>>salary;
    }
    friend void comparision (father,son);
};

class son
{
private:
    int fee;
public:
    void getfee()
    {
        cout<<"Enter son fee = "<<endl;
        cin>>fee;
    }
    friend void comparision (father,son);
};

void comparision (father f,son s)
{
    if(f.salary>s.fee)
        cout<<"Family is Happy!";
    else
        cout<<"Family is Not happy!";
}

int main()
{
    father f;
    son s;
    f.getsalary();
    s.getfee();
    comparision(f,s);
    return 0;
}
*/


/*
#include<iostream>
using namespace std;

class son;
class father
{
    int salary;
public:
    void getsalary()
    {
        cout<<"Enter salary of Father = "<<endl;
        cin>>salary;
    }
    friend void comparision (father f,son s);
};

class son
{
    int fee;
public:
    void getfee()
    {
        cout<<"Enter son fee = "<<endl;
        cin>>fee;
    }
    friend void comparision (father f,son s);
};

void comparision (father f,son s)
{
    if(f.salary>s.fee)
        cout<<"Family is Happy!";
    else
        cout<<"Family is Not happy!";
}

int main()
{
    father f;
    son s;
    f.getsalary();
    s.getfee();
    comparision(f,s);
    return 0;
}
*/

/*
#include<iostream>
using namespace std;

class second;
class first
{
    int x;
public:
    void getfirst()
    {
        cout<<"Enter 1st number = "<<endl;
        cin>>x;
    }
    friend void add (first,second);
};

class second
{
    int y;
public:
    void getsecond()
    {
        cout<<"Enter 2nd number = "<<endl;
        cin>>y;
    }
    friend void add (first,second);
};

void add (first f,second s)
{
   cout<<"The sum of inputed number is "<<f.x+s.y;
}

int main()
{
    first f;
    second s;
    f.getfirst();
    s.getsecond();
    add(f,s);
    return 0;
}
*/


/*
#include<iostream>
using namespace std;

class second;
class first
{
    int x;
public:
    void getfirst()
    {
        cout<<"Enter 1st number = "<<endl;
        cin>>x;
    }
    friend void add (first,second);
};

class second
{
    int y;
public:
    void getsecond()
    {
        cout<<"Enter 2nd number = "<<endl;
        cin>>y;
    }
    friend void add (first,second);
};

void add (first numb1,second numb2)
{
   cout<<"The difference of inputed number is "<<numb1.x-numb2.y;
}

int main()
{
    first numb1;
    second numb2;
    numb1.getfirst();
    numb2.getsecond();
    add(numb1,numb2);
    return 0;
}
*/

/*
//Distance between two points with respective cordinates.

#include<iostream>
#include<math.h>
using namespace std;

class college;
class school
{
    public:
    int x1,y1;
    void getSchoolData()
    {
    cout<<"ENTER cordinates(x1,x2) of point A : "<<endl;
    cin>>x1>>y1;
    }
    friend distance (school,college);
};

class college
{
public:
        int x2,y2;
    void getCollegeData()
    {
        cout<<"ENTER  cordinates(x2,y2) of point B : "<<endl;
        cin>>x2>>y2;
    }
    friend distance (school,college);
};

int distance (school cordinate1, college cordinate2)
{
    float ans;
    ans = sqrt ( pow ( (cordinate2.x2 - cordinate1.x1) , 2) + pow ( ( cordinate2.y2 - cordinate1.y1) , 2 ) );
    cout<<"The Distance between point A and point B = "<<ans;
}

int main()
{
    school cordinate1;
    college cordinate2;
    cordinate1.getSchoolData();
    cordinate2.getCollegeData();
    distance ( cordinate1 , cordinate2 );
    return 0;
}
*/


//Problem
/*
#include<iostream>
#include<math.h>
using namespace std;

class college;
class school
{
    int x1,y1;//private problem
    public:
    void getSchoolData()
    {
    cout<<"ENTER first two cordinates(x1,x2) = "<<endl;
    cin>>x1>>y1;
    }
    friend distance (school,college);
};

class college
{
        int x2,y2;//private problem
public:
    void getCollegeData()
    {
        cout<<"ENTER second cordinates(x2,y2) = "<<endl;
        cin>>x2>>y2;
    }
    friend distance (school,college);
};

void distance (school cordinate1, college cordinate2) //void problem
{
    float ans;
    ans = sqrt ( pow ( (cordinate2.x2 - cordinate1.x1) , 2) + pow ( ( cordinate2.y2 - cordinate1.y1) , 2 ) );
    cout<<"RESULT = "<<ans;
}

int main()
{
    school cordinate1;
    college cordinate2;
    cordinate1.getSchoolData();
    cordinate2.getCollegeData();
    distance ( cordinate1 , cordinate2 );
    return 0;
}
*/

/*
#include<iostream>
using namespace std;

class Amount
{
private:
    int Dollar,Cent;
public:
    void getamount()
    {
        cout<<"Enter Dollar : "<<endl;
        cin>>Dollar;
        cout<<"Enter Cent : "<<endl;
        cin>>Cent;
    }
    void display()
    {
        cout<<"Total Amount is $"<<Dollar<<" Dollar and "<<Cent<<" Cent.";
    }
    friend void add (Amount a1,Amount a2);
};

void add (Amount a1,Amount a2)
{
    a1.Cent=a1.Cent+a2.Cent;
    a1.Dollar=a1.Dollar+a2.Dollar+a1.Cent/100;
    a1.Cent=a1.Cent%100;
    a1.display();
}

int main()
{
    Amount a1,a2;
    a1.getamount();
    a2.getamount();
    add(a1,a2);
    return 0;
}
*/



#include<iostream>
using namespace std;

class Amount
{
private:
    int Dollar,Cent;
public:
    void getamount()
    {
        cout<<"Enter Dollar : "<<endl;
        cin>>Dollar;
        cout<<"Enter Cent : "<<endl;
        cin>>Cent;
    }
    void display()
    {
        cout<<"Total Amount is $"<<Dollar<<" Dollar and "<<Cent<<" Cent.";
    }
    friend void add (Amount a1,Amount a2);
};

void add (Amount a1,Amount a2)
{
    Amount A;
    A.Cent=a1.Cent+a2.Cent;
    A.Dollar=a1.Dollar+a2.Dollar+A.Cent/100;
    A.Cent=A.Cent%100;
    A.display();
}

int main()
{
    Amount a1,a2;
    a1.getamount();
    a2.getamount();
    add(a1,a2);
    return 0;
}
