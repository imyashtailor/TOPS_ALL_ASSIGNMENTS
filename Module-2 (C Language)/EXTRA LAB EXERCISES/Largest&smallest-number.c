/*
	Write a C program that takes three numbers from the user and determines: 
	1) The largest number. 
	2) The Smallest number.
*/

#include<stdio.h>

int main()
{
	//variable declaration
	int a,b,c;
	
	//input from user 
	printf("Enter the Value of a: ");
	scanf("%d",&a);
	
	printf("Enter the value of b: ");
	scanf("%d",&b);
	
	printf("Enter the value of c: ");
	scanf("%d",&c);
	
	printf("\n");
	
	//condition check for largest
	//checking for a
	if(a>b && a>c){
		printf("%d is the Largest Number",a);
	}
	//checking for b
	else if(b>a && b>c){
		printf("%d is the Largest Number",b);
	}
	//checking for c
	else{
		printf("%d is the Largest Number",c);
	}
	
	printf("\n");
	
	//Condition check for smallest
	if(a<b && a<c){
		printf("\n%d is the Smallest Number",a);
	}
	else if(b<a && b<c){
		printf("\n%d is the Smallest Number",b);
	}
	else{
		printf("\n%d is the Smallest Number",c);
	}
	
	
	return 0;
}