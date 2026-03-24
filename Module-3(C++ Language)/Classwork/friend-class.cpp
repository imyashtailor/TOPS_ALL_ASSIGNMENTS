//friend class in c++
#include<iostream>
using namespace std;

class Maths{
	private:
		int x,y;
	public:
		Maths(){
			x=20;
			y=30;
		}	
		//declaration of frined classes
		friend class friclass;
};

class friclass{
	public:
		void add(Maths m1){
			cout<<"Addition is = "<<m1.x+m1.y;
		}	
};

int main()
{
	Maths m1;
	friclass f1;
	f1.add(m1);
	return 0;
}