#include<iostream>
using namespace std;

// Base class
class Vehicle 
	{
		public:
			string brand = "Ford";
			void honk()
				{
					cout << "Noise : "<<"Tuut, tuut"<<endl ;
				}
	};
	
// Derived class
class Car: public Vehicle 
	{
		public:
			string model = "Mustang";
	};
	
int main()
	{
		Car myCar;
		myCar.honk();
		cout << "Brand : "<< myCar.brand <<endl;
		cout<<"Model : "<< myCar.model<<endl;
		Vehicle xxx;
		xxx.honk();
		return 0;
	}

