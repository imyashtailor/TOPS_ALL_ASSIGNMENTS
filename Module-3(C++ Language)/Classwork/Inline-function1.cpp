//Inline function example in c++
#include<iostream>
using namespace std;

class Maths{
	public:
		inline void display(){
			cout<<"\n Inline function called!...";
		}	
};

int main()
{
	Maths m1;
	m1.display();
	return 0;	
}