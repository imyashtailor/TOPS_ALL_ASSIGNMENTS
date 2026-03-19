//Area of circle using constructor
#include<iostream>
using namespace std;

class area{
	public:
		
	float pi = 3.14;
	int r;
	
	area(){
		cout<<"Enter the Radius = ";
		cin>>r;
	}
	void findareaofcircle(){
		float area = (pi*r*r);
		cout<<"\nArea of Circle = "<<area;
	}
};

int main()
{
	area a1;
	a1.findareaofcircle();
	return 0;
}