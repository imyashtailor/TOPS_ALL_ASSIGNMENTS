//This-keyword Example in c++
#include<iostream>
using namespace std;

class Maths{
	public:
		int a;
		//create constructor
		Maths(int a){
			//using this keyword
			this->a=a;
		}	
};

int main()
{
	Maths m1(23);
	cout<<m1.a;
	Maths m2(45);
	cout<<m2.a;
	return 0;
}