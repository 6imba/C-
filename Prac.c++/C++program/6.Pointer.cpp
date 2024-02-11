/*
#include<iostream>
using namespace std;

int main()
{
	int identifier=333,a;   //Normal Variable or identifier
	cout<<"The number stored by identifier in memory is : "<<identifier<<endl<<endl;
	
	cout<<"The memory address of identifier is : "<<&identifier<<endl<<endl; //& takes the address of identifier
	
	int* pointer;           // Pointer Variable(pointer) Declaration for Integer Data Type 
	pointer =&identifier;   //& takes the address of identifier , Here now pointer =&identifier, so *pointer=identifier
	cout<<"The memory address of identifier is called using pointer: "<<pointer<<endl<<endl;
	
	a=*pointer ;
	cout<<"The number stored in identifier which is pointed by pointer \nand storing the value in identifier into (a) varaible is : "<<a<<endl<<endl;
	
	cout<<"The number stored by identifier in memory is : "<<identifier<<endl<<endl;
	
	*pointer=777;           //Assign Values using dereference operator
	cout<<"The number stored in memory has been modified : "<<*pointer<<endl<<endl;
	
	a=999;
	*pointer=a;            //Assign Values using dereference operator
	cout<<"The number stored in memory is again modified : "<<*pointer<<endl<<endl;
	return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main()
{
	int identifier=333,a;
	cout<<"Value : "<<identifier<<endl<<endl;
	
	cout<<"Memory address : "<<&identifier<<endl<<endl;
	
	int* pointer;           
	pointer =&identifier;
	cout<<"Memory address(pointer) : "<<pointer<<endl<<endl;
	
	a=*pointer ;
	cout<<"Value (pointer) (a) : "<<a<<endl<<endl;
	
	cout<<"Value : "<<identifier<<endl<<endl;
	
	*pointer=777;         
	cout<<"Modification 1: "<<*pointer<<endl<<endl;
	
	a=999;
	*pointer=a;            
	cout<<"Modification 2: "<<*pointer<<endl<<endl;

	return 0;
}
*/

    #include <iostream>
    using namespace std;
    int main() {
    int q = 15;
    int *r = &q;
    cout << r;
    }
