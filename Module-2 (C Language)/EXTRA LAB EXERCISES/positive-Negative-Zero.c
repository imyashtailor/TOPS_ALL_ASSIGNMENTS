/*
	2.)Whether the number is positive, negative, or zero.
	
	formula logic:-
	positive number = n > 0;
	Negative number = n < 0;
	Zero number = n = 0;
*/

#include <stdio.h>

int main()
{
	//variable declaration
	int num;
	
	//take the input from the user
	printf("Enter the Number: ");
	scanf("%d",&num);
	
	//positive-negative and zero value calculation
	if(num > 0){
		printf("%d is the Positive Number",num);
	}else if(num < 0){
		printf("%d is the Negative Number",num);
	}else{
		printf("%d is the Zero Number",num);
	}
	
	return 0;
}