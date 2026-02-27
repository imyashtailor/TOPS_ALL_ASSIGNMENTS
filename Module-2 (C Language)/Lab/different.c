/*Write a C program that includes variables, constants, and comments. Declare 
and use different data types (int, char, float) and display their values.*/

#include<stdio.h>

int main(){
	//varaible declaration
	int a;
	char b;
	float c;
	
	//constant value declare
	const float z = 3.14;
	
	printf("Enter the Integer Value of a: ");
	scanf("%d",&a);
	
	printf("Enter the single character :");
	scanf(" %c",&b);
	
	printf("Enter the floating value :");
	scanf("%f",&c);
	
	//print the value
	printf("\nPosiitve Value is: %d",a);
	printf("\nSingle Character is: %c",b);
	printf("\nfloating point is: %.2f",c);
	printf("\nconstant value is: %.2f",z);
	return 0;
}