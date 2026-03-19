//constructor example 
#include<iostream>
using namespace std;

class maths{
	public:
		int a,b;
		//Default constructor
		maths(){
			cout<<"Default constructor called..";
		}
		//paramterized constructor
		maths(int x, int y){
			a = x;
			b = y;
		}
		//copy constructor
		maths(const maths &m3){
			a = m3.a;
			b = m3.b;
		}
		void display(){
			cout<<"\n a = "<<a<<"\t b = "<<b;
		}
			
};

int main()
{
	maths m1;
	maths m2(100,100);
	maths m3(34,78);
	m3.display();
	maths m4 = m3; //only copy the value
	return 0;
}