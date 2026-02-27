/*
	Find a simple interst program using the functions

	Formula :- simple interst = p*n*r/100;
*/
#include<stdio.h>

void interest()
{
	int p,n,r;
	float interest;
	
	printf("Enter the Principle: ");
	scanf("%d",&p);
	printf("\nEnter the no. of Year: ");
	scanf("%d",&n);
	printf("\nEnter the Rate: ");
	scanf("%d",&r);
	
	//calculation
	interest = p * n * r / 100;
	printf("\nSimple Interest is: %.2f",interest);
}

int main()
{
	interest();
	return 0;
}