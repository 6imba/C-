#include<iostream>
using namespace std;
int &min(int &a, int &b)
{
if(a<b)
return a;
else
return b;
}
int main()
{
int x,y;
cout<<"Enter two numbers:"<<endl;
cin>>x>>y;
cout<<"Min value="<<min(x,y);;
return 0;
}

