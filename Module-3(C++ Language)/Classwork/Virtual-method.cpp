//Virtual Method
#include<iostream>
using namespace std;

class parent{
	public:
		virtual void area(){
			cout<<"\n Parent class method!..";
		}
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