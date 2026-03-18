//calculator using class in c++
/*
	Write a C++ program that defines a class Calculator with functions for addition, 
subtraction, multiplication, and division. Create objects to use these functions.
*/
#include<iostream>
using namespace std;

//creating a class
class Calculator{
	public:
		//function for addition
		int add(int a,int b){
			return a + b;
		}
		
		//function for subtraction
		int sub(int a,int b){
			return a - b;
		}
		
		//function for multiplication
		int mul(int a,int b){
			return a * b;
		}
		
		//function for division
		int divide(int a,int b){
			return a / b;
		}	
};

int main()
{
	//creating object for Calculator
	Calculator calc;
	
	int num1,num2;
	
	cout<<"Enter the Number 1 = ";
	cin>>num1;
	
	cout<<"Enter the Number 2 = ";
	cin>>num2;
	
	cout<<endl;
	cout<<"Addition = "<<calc.add(num1,num2)<<endl;
	cout<<"Subtraction = "<<calc.sub(num1,num2)<<endl;
	cout<<"Multiplication = "<<calc.mul(num1,num2)<<endl;
	cout<<"Divison = "<<calc.divide(num1,num2)<<endl;
	
	return 0;
}