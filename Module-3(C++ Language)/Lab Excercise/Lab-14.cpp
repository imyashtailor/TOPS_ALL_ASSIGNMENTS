/*
	Variable Scope 
Aim :-
o Write a program that demonstrates the difference between local and global 
variables in C++. Use functions to show scope. 
o Objective: Reinforce the concept of variable scope. 
*/

#include<iostream>
using namespace std;

float pi = 3.14; //global scope variable

void localscope(){
	int x = 7;
	cout<<"Local scope using function = "<<x<<endl; //local scope variable
}

void global(){
	cout<<"Global Scope Varaible inside the function = "<<pi<<endl;	
}
int main()
{
	cout<<"Global scope variable main function = "<<pi<<endl;
	
	global();
	localscope();
	return 0;
}