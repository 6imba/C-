#include<iostream>
using namespace std;

class length
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
    void calculus(length d1, length d2)
    {
        inch=d1.inch+d2.inch;
        feet=d1.feet+d2.feet+inch/12;
        inch=inch%12;
        cout<<"The final distance is "<<feet<<" feet and "<<inch<<" inch.";
    }
};

int main()
{
    length d1,d2,d3;
    d1.getdata();
    d2.getdata();
    d3.calculus(d1,d2);
    return 0;
}
