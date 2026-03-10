/*
	Simple calculator using function
	Aim :-
	 o Write a C++ program that defines functions for basic arithmetic operations (add,subtract, multiply, divide). The main function should call these based on user input. 
o Objective: Practice defining and using functions in C++. 
*/
#include<iostream>
using namespace std;

int add(int a, int b){
	return a + b;
}
int sub(int a, int b){
	return a - b;
}
int mul(int a, int b){
	return a * b;
}
int divide(int a, int b){
	return a / b;
}
int main()
{
	int a,b;
	
	cout<<"Enter the Value of a = ";
	cin>>a;
	
	cout<<"Enter the Value of b = ";
	cin>>b;
	
	//display the data
	cout<<"\nAddition is = "<<add(a,b)<<endl;
	cout<<"\nSubtraction is = "<<sub(a,b)<<endl;
	cout<<"\nMultiplication is = "<<mul(a,b)<<endl;
	cout<<"\nDivision is = "<<divide(a,b)<<endl;
	return 0;
}