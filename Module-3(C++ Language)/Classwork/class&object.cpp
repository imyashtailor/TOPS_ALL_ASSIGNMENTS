//class and object examples in c++
#include<iostream>
using namespace std;

class car{
	public:
		string brand;
		int speed;
		
		void display(){
			cout<<"Brand = "<<brand<<endl;
			cout<<"Speed = "<<speed<<endl;
		}
};

int main()
{
	//creating an object
	car c1;
	
	c1.brand = "Agera R";
	c1.speed = 300;
	
	c1.display();
	return 0;
}