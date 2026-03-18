//Hybrid Inheritance
#include<iostream>
using namespace std;

class A{
	public:
		int a;
		void getA(){
			cout<<"\n Enter A = ";
			cin>>a;
		}
};

class B : virtual public A{
	public:
		int b;
		void getB(){
			cout<<"\nEnter B = ";
			cin>>b;
		}
};

class C : virtual public A{
	public:
		int c;
		void getC(){
			cout<<"\nEnter C = ";
			cin>>c;
		}
};

class D : public B,public C{
	public:
		int d;
		void getD(){
			cout<<"\nEnter D = ";
			cin>>d;
		}
		
		void add(){
			cout<<"\nAddition is = "<<a+b+c+d;
		}
};

int main()
{
	D d1;
	d1.getA();
	d1.getB();
	d1.getC();
	d1.getD();
	d1.add();
	return 0;
}