/*
	Lab Execercise :- 2
	Write a C program that takes an integer from the user and checks the following using 
	different operators: 
 	1.)Whether the number is even or odd. 
 	2.)Whether the number is positive, negative, or zero. 
 	3.)Whether the number is a multiple of both 3 and 5.
*/
//1.) Whether the number is even or odd.
#include<stdio.h>

int main()
{
	int num;
	
	printf("Enter the Number: ");
	scanf("%d",&num);
	
	//even or odd using if-else statement
	if(num%2==0){
		printf("%d is Even Number",num);
	}else{
		printf("%d is Odd Number",num);
	}
	return 0;
}