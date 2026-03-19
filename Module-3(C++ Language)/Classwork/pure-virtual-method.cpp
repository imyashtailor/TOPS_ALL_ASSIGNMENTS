//Pure-virtual method or function
#include<iostream>
using namespace std;

class parent{
	public:
		//pure-virtual method
		virtual void area()=0;
};

class rect : public parent{
	public:
		int l,w;
		void area(){
			cout<<"Enter the Length and width = ";
			cin>>l>>w;
			cout<<"Area of Rectangle = "<<l*w;
		}
};

int main()
{
	rect r1;
	r1.area();
	return 0;
}