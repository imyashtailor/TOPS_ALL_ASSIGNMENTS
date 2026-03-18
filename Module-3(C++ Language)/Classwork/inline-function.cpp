/*
	Aim :- Write a program to find the multiplication values and the cubic values using inline function
	
	inline funtions :- inline functions is a function where the compiler replaces the function calls with the actual functions call. 
*/
#include<iostream>
using namespace std;

//function for multiplication values
inline int mul(int a,int b){
	return a * b;
}

//functions for cube values
inline int cube(int x){
	return x*x*x;
}

int main()
{
	int num1,num2,num;
	
	cout<<"Enter the Value 1 = ";
	cin>>num1;
	
	cout<<"Enter the Value 2 = ";
	cin>>num2;
	
	cout<<"Multiplication Values are = "<<mul(num1,num2)<<endl;
	
	cout<<endl;
	cout<<"Enter the Value = ";
	cin>>num;
	cout<<"Cube values are = "<<cube(num)<<endl;
	return 0;
}