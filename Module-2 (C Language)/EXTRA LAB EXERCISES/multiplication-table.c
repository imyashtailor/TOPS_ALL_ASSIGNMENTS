/*
	Practical - 2 => Extra Lab Practice

	program :- write a c program that takes an integer input from the user and prints it's multiplication table using a for loop
	
	challenge :-  Allow the user to input the range of the multiplication table (e.g., from 1 to N).
*/

#include<stdio.h>

int main()
{
	//declare a variable
	int n,i,range;
	
	//take the input from the user
	printf("Enter the Number: ");
	scanf("%d",&n);
	
	printf("Enter the Range: ");
	scanf("%d",&range);
	
	//main logic
	for(i=1;i<=range;i++){
		printf("\n %d x %d = %d",n,i,n*i);
	}
	
	return 0;
}