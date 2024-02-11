#include<iostream>
using namespace std;

class copy
	{
		private:
			int x, y; //data members
		public:
			copy(int x1, int y1)//member function
				{
					x = x1;
					y = y1;
				}
				
			copy(const copy &sam)//Copy constructor 
				{
					x = sam.x;
					y = sam.y;
				}
			
			void display()
				{
					cout<<x<<" "<<y<<endl;
				}
	};
	
int main()
	{
		copy obj1(10, 15); // Normal constructor
		copy obj2 = obj1; // Copy constructor
		cout<<"Normal constructor : ";
		obj1.display();
		cout<<"Copy constructor : ";
		obj2.display();
		return 0;
	}
