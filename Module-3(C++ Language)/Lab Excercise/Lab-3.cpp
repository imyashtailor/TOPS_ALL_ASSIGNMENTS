/*
	Aim :- Write two small programs: one using Procedural Programming (POP) to calculate the 
		   area of a rectangle, and another using Object-Oriented Programming (OOP) with a 
           class and object for the same task. 
*/
//part -1 area of rectangle using pop (using function)

#include<iostream>
using namespace std;

int calculatearea(int l, int w){
	return l*w;
}

int main()
{
	int l,w;
	
	cout<<"Enter the length = ";
	cin>>l;
	
	cout<<"Enter the width = ";
	cin>>w;
	
	cout<<"\nArea of Rectangle = "<<calculatearea(l,w);	
	return 0;
}