/*
	3.) Whether the number is a multiple of both 3 and 5.
	
	formula logic :-
	(num%3==0 && num%5==0)
*/

#include<stdio.h>

int main()
{
	//variable declaration
	int n;
	
	//take the input from the user
	printf("Enter the Number: ");
	scanf("%d",&n);
	
	//main logic using if-else
	if(n % 3 == 0 && n % 5 == 0)
	{
		printf("\n %d is the multiple of 3 and 5",n);
	}else{
		printf("\n %d is not the multiple of 3 and 5",n);
	}
	
	return 0;
}

