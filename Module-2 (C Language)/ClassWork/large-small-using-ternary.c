/*
Write a C program that takes three numbers from the user and determines: 
	1) The largest number. using ternary operator

	ternary operator syntax :- 
	variable = (condition) ? if_condition_true : if_condition_false;
*/

#include<stdio.h>

int main()
{
	//Varaible declaration
	int a,b,c,max;
	
	//take from user
	printf("Enter the Value of a: ");
	scanf("%d",&a);
	
	printf("Enter the Value of b: ");
	scanf("%d",&b);
	
	printf("Enter the Value of c: ");
	scanf("%d",&c);
	
	//find max value among three using ternary operator
	max = (a > b && a > c) ? a : (b > c ? b : c);
	
	printf("\n");
	
	printf("The maximum value is: %d",max);
	
	return 0;
}