//function overloading

#include<iostream>
using namespace std;

class Maths{
	public:
		void add(int a,int b){
			int c = a + b;
			cout<<"Addition is = "<<c;
		}
		
		//function overloading
		void add(float x,float y,float z){
			int ans = x + y + z;
			cout<<"\nFloat Addition is = "<<ans;
		}	
};

int main()
{
	Maths m1;
	m1.add(20,30);
	m1.add(7.7,4.5,6.8);
	return 0;
}