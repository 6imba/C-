/*
#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    return 0;
}
*/


/*
#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    std::cout << "Namaste Nepal";
    return 0;
}
*/




/*
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!";
    return 0;
}
*/

/*
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!";
    std::cout <<" \n Hello World!";
    return 0;
}
*/



#include<iostream>
using namespace std;

class calculate

{
	public:
    int sum(int a, int b)
    {
        return a+b;
    }
};

int main()
{
    calculate JX;
    cout<<JX.sum(2,3);
}





/*
#include<iostream>
using namespace std;

class calculate

{
private:
    int x,y;

public:

    int sum(int a, int b)
    {
        x=a;
        y=b;
        return x+y;
    }

    int diff()
    {
        return x-y;
    }
};

int main()
{
    calculate JX;
    cout<<JX.sum(5,3);
    cout<<"\n"<<JX.diff();
}

*/

/*
#include<iostream>
using namespace std;

class calculate

{
private:
    int x,y;
public:

    int sum(int a, int b)
    {
        x=a;
        y=b;
        return x+y;
    }
    int diff(int a, int b)
    {
        x=a;
        y=b;
        return x-y;
    }
};

int main()
{
    calculate JX;
    cout<<JX.sum(5,3);
    cout<<"\n"<<JX.diff(4,3);
}
*/



/*
#include<iostream>
using namespace std;

class calculate

{
private:
    int x,y;
public:

    int sum(int a, int b)
    {
        x=a;
        y=b;
        return x+y;
    }
    int diff(int a, int b)
    {
        x=a;
        y=b;
        return x-y;
    }
};

int main()
{
    calculate JX;
    cout<<JX.sum(5,3)<<"\n"<<JX.diff(4,3);
}
*/


//problem
/*
#include<iostream>
using namespace std;

class calculate

{
private:
    int x,y;
public:

    int sum(int a, int b)
    {
        x=a;
        y=b;
        return x+y;
    }
    int diff()
    {
        return x-y;
    }
};

int main()
{
    calculate JX;
    cout<<JX.sum(5,3)<<"\n"<<JX.diff()<<"\nend";//problem
}
*/



/*
#include<iostream>
using namespace std;

class calculate

{

public:

    int sum(int a, int b)
    {
        return a+b;
    }

    int diff(int a, int b)
    {
        return a-b;
    }
};

int main()
{
    calculate JX;
    cout<<JX.sum(5,3);
    cout<<"\n"<<JX.diff(4,2);
}
*/




/*
#include<iostream>
using namespace std;

class calculate

{
private:
    int x,y;

public:

    int sum(int a, int b)
    {
        x=a;
        y=b;
        return x+y;
    }

    int diff()
    {
        return x-y;
    }

    int mul()
    {
        return x*y;
    }

    int div()
    {
        return x/y;
    }

    int rem()
    {
        return x%y;
    }
};

int main()
{
    calculate JX;
    cout<<"Sum="<<JX.sum(5,3);
    cout<<"\n Difference="<<JX.diff();
    cout<<"\n Product="<<JX.mul();
    cout<<"\n Division="<<JX.div();
    cout<<"\n"<<" Remainder="<<JX.rem();
}
*/










/*
#include<iostream>
using namespace std;

class calculate

{
private:
    int a,b,c,d;
public:

    int sum()
    {
        cin>>a>>b;
    }
    int display()
    {
        c=a+b;
        d=a-b;
        cout<<"Sum = "<<c<<"\nDifference = "<<d;
    }
};

int main()
{
    calculate JX;
    cout<<"Enter two number:";
    JX.sum();
    JX.display();
}
*/

//PROBLEM
/*
#include<iostream>
using namespace std;

class calculate

{
public:

    int display(int a, int b )
    {
        cin>>a>>b;
        cout<<"Sum = "<<a+b;
    }
};

int main()
{
    calculate JX;
    cout<<"Enter two number:";
    JX.display();
}
*/




/*
#include<iostream>
using namespace std;

class calculate

{
private:
    int x,y;
public:

    int getData()
    {
        cin>>x>>y;//this will take input onlu but ....when u apply s1 also and s2 instead of s3 u get output also...
        //return x+y;//s1
    }
};

int main()
{
    calculate JX;
    cout<<"Enter two numbers : ";
    JX.getData();//go up//s3
    //cout<<JX.getData();//s2
}
*/
