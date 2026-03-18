//constructor in derived in c++
#include<iostream>
using namespace std;

class parent{
	public:
		//create a constructor
		parent(){
			cout<<"\n Parent class constructor called!..";
		}
		parent(int x){
			cout<<"\nX = "<<x;
		}
};

class child : public parent{
	public:
		child(){
			cout<<"\n Child class constructor called!...";
		}
		child(int y,int z,int x):parent(x){
			cout<<"\n in child Y = "<<y<< " z = "<<z;
		}
};
int main()
{
	child c1;
	child(10,20,30);
	return 0;
}