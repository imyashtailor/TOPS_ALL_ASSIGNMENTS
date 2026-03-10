/*
	Aim :- Write a program that asks for two numbers and displays their sum. Ensure this is 
		   done after setting up the IDE (like Dev C++ or CodeBlocks). 
*/
#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	
	cout<<"Enter the Number 1 = ";
	cin>>a;
	
	cout<<"Enter the Number 2 = ";
	cin>>b;
	
	//calculate the sum
	c = a + b;
	
	cout<<"Sum of Two Number is = "<<c;
	return 0;
}