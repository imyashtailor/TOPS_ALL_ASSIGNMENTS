//Freind functions in c++
#include<iostream>
using namespace std;

class Maths{
	private:
		int x,y;
	public:
		Maths(){
			x=10;
			y=20;
		}
		//friend function declaration
		friend void add(Maths m1);
};

void add(Maths m1){
	cout<<"Addition = "<<m1.x+m1.y;
}

int main()
{
	//object pass to the friend functions
	Maths m1;
	add(m1);
	return 0;
}