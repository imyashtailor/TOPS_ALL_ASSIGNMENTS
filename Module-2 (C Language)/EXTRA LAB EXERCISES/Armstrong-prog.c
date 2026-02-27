/*
	Armstrong number program :-
	
	Aim :- Write a C program that checks whether a given number is an Armstrong number or not (e.g., 
		   153 = 1^3 + 5^3 + 3^3).
	
	Challenge:- Write a program to find all Armstrong numbers between 1 and 1000.
*/

#include<stdio.h>
int main()
{
	int num,digit,sum=0,temp;
	
	printf("Enter the Number: ");
	scanf("%d",&num);
	temp=num;
	
	while(temp!=0){
		digit = temp % 10;
		sum = sum + (digit*digit*digit);
		temp = temp / 10;
	}
	if(sum==num){
		printf("%d is an Armstrong Number.",num);
	}else{
		printf("%d is not an Armstrong Number.",num);
	}
	
	return 0;
}