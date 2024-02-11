#include<iostream>
using namespace std;

class time
{
private:
    int hh,mm,ss;
public:
    void settime()
    {
        hh=0;
        mm=0;
        ss=0;
    }
    void gettime()
    {
        cout<<"ENter Hour    : "<<endl;
        cin>>hh;
        cout<<"ENter Minutes : "<<endl;
        cin>>mm;
        cout<<"ENter Second  : "<<endl;
        cin>>ss;
    }
    void addtime(time t1,time t2)
    {
        ss=t1.ss+t2.ss;
        mm=ss/60;
        ss=ss%60;
        mm=mm+t1.mm+t2.mm;
        hh=mm/60;
        mm=mm%60;
        hh=hh+t1.hh+t2.hh;
    }
    void showtime()
    {
        cout<<"Displaying Final Time Data : "<<endl;
        cout<<"Hours:Minutes:Second : "<<hh<<":"<<mm<<":"<<ss;
    }
};

int main()
{
    time t1,t2,t3;
    t1.settime();
    t2.settime();
    t1.gettime();
    t2.gettime();
    t3.addtime(t1,t2);
    t3.showtime();
    return 0;
}
