//Extra Lab Practical:-
/*
	LAB EXERCISE :- 1

	Write a C program that acts as a simple calculator. The program should take two numbers 
	and an operator as input from the user and perform the respective operation (addition, 
	subtraction, multiplication, division, or modulus) using operators. 
=> Challenge: Extend the program to handle invalid operator inputs. 
*/

#include<stdio.h>
#include<math.h>

int main()
{
	//variable declaration
	char op;
	double a,b,res;
	
	printf("Enter the Operators(+,-,*,/,%): ");
	scanf(" %c",&op);
	
	//take the two value form the user
	printf("Enter the Value of a: ");
	scanf("%lf",&a);
	
	printf("Enter the Value of b: ");
	scanf("%lf",&b);	
	
	
	//calculation of calculator
	switch(op)
	{
		case '+':
			res = a + b;
			printf("Addition of Two Numbers: %.f",res);
		break;
		
		case '-':
			res = a - b;
			printf("Subtraction of Two Numbers: %.f",res);
		break;
		
		case '*':
			res = a * b;
			printf("Multiplication of Two Numbers: %.f",res);
		break;
		
		case '/':
			if(b!=0){
				res = (float)a / b;
				printf("Division of Two Numbers: %.2f",res);
			}else{
				printf("\n Error! Division by zero is not allowed.");
			}
		break;
		
		case '%':
			res = fmod(a, b);
			printf("Modulus of Two Numbers: %.2f",res);
		break;
		default:
			printf("Sorry!..Invalid Operator");
	}
	
	return 0;
}