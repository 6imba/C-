
#include<iostream>
using namespace std;


class First
{
private:
    int a;
public:
    First()
    {
        a=17;
    }
    friend class Second;
};


class Second
{
private:
    int b;
public:
    void show (First&x)
    {
        cout<<" Value of (a) which is member of class First = "<<x.a;
        cout<<"\n Value of (b) which is member of class Second ="<<b;
    }
    Second()
    {
        b=9;
    }
};


int main ()
{
    First o;
    Second p;
    p.show(o);
    return 0;
}



/*
#include<iostream>
using namespace std;


class First
{
private:
    int a=17;
public:
    friend class Second;
};


class Second
{
private:
    int b=9;
public:
    void show (First&x)
    {
        cout<<" Value of (a) which is member of class First = "<<x.a;
        cout<<"\n Value of (b) which is member of class Second ="<<b;
    }
};


int main ()
{
    First o;
    Second p;
    p.show(o);
    return 0;
}
*/


/*
#include<iostream>
using namespace std;


class First
{
private:
    int a=17;
    friend class Second;
};


class Second
{
private:
    int b=9;
public:
    void show (First&x)
    {
        cout<<" Value of (a) which is member of class First = "<<x.a;
        cout<<"\n Value of (b) which is member of class Second ="<<b;
    }
};


int main ()
{
    First o;
    Second p;
    p.show(o);
    return 0;
}
*/

//Problem
/*
#include<iostream>
using namespace std;


class First
{
private:
    int a=17;
    friend class Second;
};


class Second
{
private:
    int b=9;

    void show (First&x)
    {
        cout<<" Value of (a) which is member of class First = "<<x.a;
        cout<<"\n Value of (b) which is member of class Second ="<<b;
    }
};


int main ()
{
    First o;
    Second p;
    p.show(o);
    return 0;
}
*/


/*
#include<iostream>
using namespace std;


class First
{
public:
    int a;
    First()
    {
        a=17;
    }
    friend class Second;
};


class Second
{
public:
    int b;
    void show (First&x)
    {
        cout<<" Value of (a) which is member of class First = "<<x.a;
        cout<<"\n Value of (b) which is member of class Second = "<<b;
    }
    Second()
    {
        b=9;
    }
};


int main ()
{
    First o;
    Second p;
    p.show(o);
    return 0;
}
*/
