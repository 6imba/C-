
#include<iostream>
using namespace std;

class bank
{
private:
    char name[100],type[100];
    int numb,total,deposit,withdraw;
public:
    void setdata()
    {
        total=0;
        deposit=0;
        withdraw=0;
    }
    void getdata()
    {
        cout<<"ENTER Account Holder name   : "<<endl;
        cin>>name;
        cout<<"ENTER Account Holder number : "<<endl;
        cin>>numb;
        cout<<"ENTER Account Type          : "<<endl;
        cin>>type;
    }
    void showdata()
    {
        cout<<"Account Holder name   : "<<name;
        cout<<"\nAccount number        : "<<numb;
        cout<<"\nAccount Type          : "<<type;
        cout<<"\nDeposited Amount      : "<<deposit;
        cout<<"\nWithdraw Amount       : "<<withdraw;
        cout<<"\nTotal Balance         : "<<total;
    }
    void transection()
    {
        cout<<"\n\nNamaste Sir,you can Deposite the Amount : "<<endl;
        cin>>deposit;
        total=total+deposit;
        cout<<"\n\nNamaste Sir,you can Withdraw Amount     : "<<endl;
        cin>>withdraw;
        if(withdraw<=total)
        {
            cout<<"Withdraw balance proceeded";
            total=total-withdraw;
            }
        else
            cout<<"Sorry,you do not have sufficient balance!";
    }
    void displaydata()
    {
        cout<<"\n\nMrs/Mrs "<<name<<" has total balance of "<<total<<" Rupee only."<<endl;
    }
};

int main()
{
bank act;
act.setdata();
act.getdata();
act.showdata();
act.transection();
act.displaydata();
return 0;
}



/*
#include<iostream>
using namespace std;

class bank
{
private:
    string name,type;
    int numb;
    float total;
public:
    void getdata()
    {
        cout<<"ENTER Account Holder name   : "<<endl;
        cin>>name;
        cout<<"ENTER Account Holder number : "<<endl;
        cin>>numb;
        cout<<"ENTER Account Type          : "<<endl;
        cin>>type;
    }
    void showdata()
    {
        cout<<"Account Holder name   : "<<name;
        cout<<"\nAccount number        : "<<numb;
        cout<<"\nAccount Type          : "<<type;
    }
    void deposit(int amt)
    {
        total=amt;
    }
    void withdrew()
    {
        int withdraw;
        cout<<"\n\nNamaste Sir,you can Withdraw Amount     : "<<endl;
        cin>>withdraw;
        if(withdraw<=total)
        {
            cout<<"Withdraw balance proceeded";
            total=total-withdraw;
            }
        else
            cout<<"Sorry,you do not have sufficient balance!";
    }
    void displaydata()
    {
        cout<<"\n\nMrs/Mrs "<<name<<" has total balance of "<<total<<" Rupee only."<<endl;
    }
};

int main()
{
bank act;
act.getdata();
act.showdata();
act.deposit(10000);
act.withdrew();
act.displaydata();
return 0;
}
*/



/*
#include<iostream>
using namespace std;

class bank
{
private:
    string name,type;
    int numb;
    float total;
public:
    void getdata()
    {
        cout<<"ENTER Account Holder name   : "<<endl;
        cin>>name;
        cout<<"ENTER Account Holder number : "<<endl;
        cin>>numb;
        cout<<"ENTER Account Type          : "<<endl;
        cin>>type;
    }
    void showdata()
    {
        cout<<"Account Holder name   : "<<name;
        cout<<"\nAccount number        : "<<numb;
        cout<<"\nAccount Type          : "<<type;
    }
    void deposit()
    {
        //int total //donot write this line as total is already decleared above in float....
        cout<<"\n\nNamaste Sir,you can Deposite the Amount : "<<endl;
        cin>>total;

        //total=amt;
    }
    void withdrew()
    {
        int withdraw;
        cout<<"\n\nNamaste Sir,you can Withdraw Amount     : "<<endl;
        cin>>withdraw;
        if(withdraw<=total)
        {
            cout<<"Withdraw balance proceeded";
            total=total-withdraw;
            }
        else
            cout<<"Sorry,you do not have sufficient balance!";
    }
    void displaydata()
    {
        cout<<"\n\nMrs/Mrs "<<name<<" has total balance of "<<total<<" Rupee only."<<endl;
    }
};

int main()
{
bank act;
act.getdata();
act.showdata();
act.deposit();
act.withdrew();
act.displaydata();
return 0;
}
*/



/*
#include<iostream>
using namespace std;

class bank
{
private:
    string name,type;
    int numb;
    float total;
public:
    void assign()
    {
        name="Amir";
        type="Saving";
        numb=770502;
        total=0;
    }
    void deposit(int amt)
    {
        total=amt;
    }
    void withdraw()
    {
        int take;
        cout<<"Namaste Sir,\n"<< name<<" your "<< type<<" "<< numb<<" account have total 10000 ruppe balance and can Withdraw Amount     : "<<endl;
        cin>>take;
        if(total>=take)
        {
            cout<<"Withdraw balance proceeded";
            total=total-take;
            }
        else
        {
            cout<<"Sorry,you do not have sufficient balance!";
        }
    }
    void displaydata()
    {
        cout<<"\n\nMrs/Mrs "<<name<<" has total balance of "<<total<<" Rupee only."<<endl;
    }
};

int main()
{
bank act;
act.assign();
act.deposit(10000);
act.withdraw();
act.displaydata();
return 0;
}
*/
