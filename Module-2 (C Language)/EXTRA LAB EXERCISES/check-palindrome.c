/*
	Aim :- write a c program to check number is palindrome or not
	
	step 1: store the number
	step 2: reversed = revserd * 10 + digit or (num % 10);
			n = n / 10;
	step 3:- if(original == rev), it is palindrome and not then it is not palindrome
*/

#include<stdio.h>

void palindrome(int n)
{
	int digit,rev=0;
	
	int temp = n;
	while(n!=0)
	{
		digit = n % 10;
		rev = rev * 10 + (n % 10);
		n = n / 10;
	}
	if(temp==rev)
	{
		printf("It is Palindrome");
	}
	else{
		printf("It is not Palindrome");
	}
}

int main()
{
	int num;
	
	printf("Enter the Number: ");
	scanf("%d",&num);
	
	//call the function
	palindrome(num);
	return 0;
}