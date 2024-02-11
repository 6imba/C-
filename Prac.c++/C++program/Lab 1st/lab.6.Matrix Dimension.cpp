#include<iostream>
using namespace std;

class Matrix
{
private:
    int ary[3][3];
public:
    void getdata()
    {
        for (int i=0;i<=2;i++)
        {
            for (int j=0;j<=2;j++)
            {
                cout<<"INPUT "<<i+1<<" row "<<j+1<<" column element of 3*3 matrix and press Enter: ";
                cin>>ary[i][j];
            }
        }
    }

     void display()
    {
        cout<<"\nMatrix form:\n";
        for (int i=0;i<=2;i++)
        {
            for (int j=0;j<=2;j++)
            {
                cout<<ary[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }


    Matrix transpose(Matrix m1)
    {
        Matrix m;
        cout<<"\nTranspose:\n";
        for (int i=0;i<=2;i++)
        {
            for (int j=0;j<=2;j++)
            {
                m.ary[i][j]=m1.ary[j][i];
            }
        }
        return m;
    }

};

int main()
{
Matrix m1,m2;
m1.getdata();
m1.display();
m2=m1.transpose(m1);
m2.display();
return 0;
}
