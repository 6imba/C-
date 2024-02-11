//C++ program to write and read text in/from file.
/*
#include <iostream>
#include <fstream>
using namespace std;
 
int main()
{
   fstream file;
   file.open("sample.txt",ios::out);
   if(!file)
   {
       cout<<"Error in creating file!!!"<<endl;
       return 0;
   }
    
   cout<<"File created successfully."<<endl;
   file<<"ABCD.";
   file.close();
   file.open("sample.txt",ios::in); 
   if(!file)
   {
       cout<<"Error in opening file!!!"<<endl;
       return 0;
   }   
   
   char ch; 
   cout<<"File content: ";
   while(!file.eof())
   {
       file>>ch; 
       cout<<ch;
   }
    
   file.close(); 
   return 0;
}
*/





/*
#include <iostream>
#include <fstream>
using namespace std;
 

class student
{
    private:
        char name[30];
        int age;
    public:
        void getData(void)
        { cout<<"Enter name:"; cin.getline(name,30);
          cout<<"Enter age:"; cin>>age;
        }
 
        void showData(void)
        {
        cout<<"Name:"<<name<<",Age:"<<age<<endl;
        }
};
 
int main()
{
    student s;
     
    ofstream file;
    file.open("aaa.txt",ios::out);
    if(!file)
    {
      cout<<"Error in creating file.."<<endl;
      return 0;
    }
    cout<<"\nFile created successfully."<<endl;
 
    s.getData();    
    file.write((char*)&s,sizeof(s));
    file.close();   
    cout<<"\nFile saved and closed succesfully."<<endl;
 
    ifstream file1;
    file1.open("aaa.txt",ios::in);
    if(!file1){
        cout<<"Error in opening file..";
        return 0;
    }

    file1.read((char*)&s,sizeof(s));
    s.showData();
    file1.close();
    return 0;
}
*/




#include <iostream>
#include <fstream>

using namespace std;

int main(){

  char text[200];

  fstream file;
  file.open ("example.txt", ios::out | ios::in );

  cout << "Write text to be written on file." << endl;
  cin.getline(text, sizeof(text));

  // Writing on file
  file << text << endl;

  // Reding from file
  file >> text;
  cout << text << endl;

  //closing the file
  file.close();
  return 0;
}
