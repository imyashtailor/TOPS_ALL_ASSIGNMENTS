//Static and static functions example in c++
#include<iostream>
using namespace std;

class Maths{
	public:
		int a;
		//static example or keyword
		static int x;
		//create constructor
		
		Maths(int a){
			//using this keyword
			this->a=a;
			//using scope resoultion
			Maths::x++;
		}
		static void objcountprint(){
			cout<<"\nTotal Object = "<<Maths::x;
		}	
};

//Initilization of x value
int Maths::x=0;

int main()
{
	Maths m1(23);
	cout<<m1.a;
	Maths m2(45);
	cout<<"\n"<<m2.a;
	cout<<"\n"<<m1.x;
	cout<<"\n"<<m2.x;
	//access static functions method
	Maths::objcountprint();
	return 0;
}