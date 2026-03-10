/*
	Factorial Calculation Using Recursion
	Aim :- Write a C++ program that calculates the factorial of a number using recursion. 
o Objective: Understand recursion in functions.
*/

#include<iostream>
using namespace std;

int fact(int n){
	if(n==1){
		return 1;
	}
	int f;
	f = n*fact(n-1);
	return f;
}

int main()
{
	cout<<"Factorial of Given Number = "<<fact(5)<<endl;
	return 0;
}