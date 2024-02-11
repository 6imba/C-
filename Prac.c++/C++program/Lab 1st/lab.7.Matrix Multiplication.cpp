
#include<iostream>
using namespace std;

class Matrix
{
private:
    int a[3][3],x[3][3];
public:
    void getdata()
    {
        cout<<"INPUT  element of 3*3 matrix: ";
        for (int i=0;i<=2;i++)
        {
            for (int j=0;j<=2;j++)
            {
                cin>>a[i][j];
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
                cout<<a[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }



    Matrix Multiply (Matrix m2)
    {
        Matrix m;
        for (int i=0;i<=2;i++)
        {
            for (int j=0;j<=2;j++)
            {
                x[i][j]=0;
                    for (int k=0;k<=2;k++)
                    {
                        m.x[i][j]=m.x[i][j]+(a[i][k]*m2.a[k][j]);
                    }
            }
        }
        return m;
    }

    void Multdisplay()
    {
        cout<<"\nMatrix Multiplication Display form:\n";
        for (int i=0;i<=2;i++)
        {
            for (int j=0;j<=2;j++)
            {
                cout<<x[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
};

int main()
{
Matrix m1,m2,m3;
m1.getdata();
m2.getdata();
m1.display();
m2.display();
m3=m1.Multiply(m2);
m3.Multdisplay();
return 0;
}
