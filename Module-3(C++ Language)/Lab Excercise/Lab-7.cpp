/*
	Aim :- Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise 
           operators. Perform operations using each type of operator and display the results.
*/

#include<iostream>
using namespace std;

int main()
{
	int a,b;
	
	cout<<"Enter the Value of A = ";
	cin>>a;
	
	cout<<"Enter the Value of B = ";
	cin>>b;
	
	//1.Arithmatic Operator
	cout<<"\n======Arithmatic Operator=========\n";
	cout<<"Addition is = "<<(a+b)<<endl;
	cout<<"Subtraction is = "<<(a-b)<<endl;
	cout<<"Multiplication is = "<<(a*b)<<endl;
	cout<<"Division is = "<<(a/b)<<endl;
	cout<<"Moduls is = "<<(a%b)<<endl;	
	
	//2.Relational Operator
	cout<<"\n======Relational Operator=========\n";
	cout << boolalpha;
	cout<<"a==b = "<<(a==b)<<endl;
	cout<<"a!=b = "<<(a!=b)<<endl;
	cout<<"a<b = "<<(a<b)<<endl;
	cout<<"a>b = "<<(a>b)<<endl;
	cout<<"a<= = "<<(a<=b)<<endl;
	cout<<"a>= = "<<(a>=b)<<endl;
	
	//3.Logical Operator
	cout<<"\n======Logical Operator=========\n";
	cout << boolalpha;
	cout<<"a&&b = "<<(a>0 && b>0)<<endl;
	cout<<"a||b = "<<(a>0 || b>0)<<endl;
	cout<<"a!b = "<<(!(a>0))<<endl;
	
	//3.Bitwise Operator
	cout<<"\n======Bitwise Operator=========\n";
	cout<<"a & b = "<<(a & b)<<endl;
	cout<<"a | b = "<<(a | b)<<endl;
	cout<<"a ^ b = "<<(a ^ b)<<endl;
	cout<<"~a = "<<(~a)<<endl;
	cout<<"a << 1 = "<<(a << 1)<<endl;
	cout<<"a >> 1 = "<<(a >> 1)<<endl;
	
	return 0;
}