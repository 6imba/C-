#include<iostream>
using namespace std;

class Amount
{
private:
    int rupee,paisa;
public:
    void getamount()
    {
        cout<<"Enter Rupee : "<<endl;
        cin>>rupee;
        cout<<"Enter Paisa : "<<endl;
        cin>>paisa;
    }
    void display()
    {
        cout<<"Total Amount is "<<rupee<<" Rupee and "<<paisa<<" Paisa.";
    }
    friend void add (Amount a1,Amount a2);
};

void add (Amount a1,Amount a2)
{
    Amount A;
    A.paisa=a1.paisa+a2.paisa;
    A.rupee=a1.rupee+a2.rupee+A.paisa/100;
    A.paisa=A.paisa%100;
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
