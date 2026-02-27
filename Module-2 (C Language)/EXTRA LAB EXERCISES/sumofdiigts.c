/*
	Practical - 3 :- write a C Program that takes on integer from the user and calculates the sum of digits using a while loop
	
	challenge :- Expand the program to reverse the digits of the number
*/

#include<stdio.h>

int main()
{
	int n;
	int sum = 0;
	int reverse = 0;
	
	printf("Enter the Number: ");
	scanf("%d",&n);
	
	//main logic
	while(n!=0){
		sum = sum + (n%10);
		reverse = reverse * 10 + (n % 10);
		n = n / 10;
	}
	printf("\n Sum of Digits: %d",sum);
	printf("\n Reverse of Number: %d",reverse);
	return 0;
}