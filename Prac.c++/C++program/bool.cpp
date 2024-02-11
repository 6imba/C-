//Sir le sikako......
/* yadi kunai pani number lai tesko half(including half) vanda muni ko number le divide jadaina vane
 tyo vanda mathi ko le jane tw kurai vayana (exluding the number self)*/

/*
#include <iostream>
using namespace std;
bool checkPrimeNumber(int);
int main()
{
int n;
cout << "Enter a positive integer: ";
cin >> n;
if(checkPrimeNumber(n) == false)
cout << n << " is a prime number.";
else
cout << n << " is not a prime number.";
return 0;
}
bool checkPrimeNumber(int n)
{
bool flag = false;
for(int i = 2; i <= n/2; ++i)// divide test of given number by  2 to half of itself.............
{
if(n%i == 0)
{
flag = true;
break;
}
}
return flag;
}
*/




/*
#include <iostream>
using namespace std;
bool checkPrimeNumber(int);
int main()
{
int n;
cout << "Enter a positive integer: ";
cin >> n;
if(checkPrimeNumber(n) == false)
cout << n << " is a prime number.";
else
cout << n << " is not a prime number.";
return 0;
}
bool checkPrimeNumber(int n)
{
bool flag = false;
for(int i = 2; i < n; ++i)// divide test of given number by  2 to  itself.............
{
if(n%i == 0)
{
flag = true;
break;
}
}
return flag;
}
*/





/*
#include <iostream>
using namespace std;
//---------------------------------------------------------------------------
int main(int argc, char* argv[])//......??why is these nonsense argument iny main function........
{
    bool MachineIsWorking = true;

    cout << "Since this machine is working, its value is "
         << MachineIsWorking << endl;

    MachineIsWorking = false;

    cout << "The machine has stopped operating. "
         << "Now its value is " << MachineIsWorking << endl;

    return 0;
}
*/


/*
#include <iostream>
using namespace std;
int main()
{
    bool MachineIsWorking = true;

    cout << "Since this machine is working, its value is "
         << MachineIsWorking << endl;

    MachineIsWorking = false;

    cout << "The machine has stopped operating. "
         << "Now its value is " << MachineIsWorking << endl;

    return 0;
}

*/



/*
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    bool MachineIsWorking = 6;

    cout << "Since this machine is working, its value is "
         << MachineIsWorking << endl;

    MachineIsWorking = 12;

    cout << "The machine has stopped operating. "
         << "Now its value is " << MachineIsWorking << endl;

    return 0;
}
*/


/*
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
    bool MachineIsWorking = 3435;

    cout << "Since this machine is working, its value is "
         << MachineIsWorking << endl;

    MachineIsWorking = 34554;

    cout << "The machine has stopped operating. "
         << "Now its value is " << MachineIsWorking << endl;

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
	char MachineIsWorking;
     MachineIsWorking = true;// no bool..................................

    cout << "Since this machine is working, its value is "
         << MachineIsWorking << endl;

    MachineIsWorking = false;

    cout << "The machine has stopped operating. "
         << "Now its value is " << MachineIsWorking << endl;

    return 0;
}
*/
/*


//playing......

//'MachineIsWorking' was not declared in this scope

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
     MachineIsWorking = true;

    cout << "Since this machine is working, its value is "
         << MachineIsWorking << endl;

    MachineIsWorking = false;

    cout << "The machine has stopped operating. "
         << "Now its value is " << MachineIsWorking << endl;

    return 0;
}



//[Error] incompatible types in assignment of 'bool' to 'char [10]'........true....flase

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	char MachineIsWorking[10];
     MachineIsWorking = true;

    cout << "Since this machine is working, its value is "
         << MachineIsWorking << endl;

    MachineIsWorking = false;

    cout << "The machine has stopped operating. "
         << "Now its value is " << MachineIsWorking << endl;

    return 0;
}




#include <iostream>
using namespace std;

int main()
{
	char MachineIsWorking[10];
     MachineIsWorking = "rue";// no bool..................................

    cout << "Since this machine is working, its value is "
         << MachineIsWorking << endl;

    MachineIsWorking = "alse";

    cout << "The machine has stopped operating. "
         << "Now its value is " << MachineIsWorking << endl;

    return 0;
}
*/


//https://www.geeksforgeeks.org/bool-data-type-in-c//////////////////////////////.......................////////////.............
//https://www.w3schools.com/cpp/cpp_booleans.asp...........///////////////////////////.......................////////////.............

// sir le deko pdf ko Example 2: Checking prime number using class and object try it
