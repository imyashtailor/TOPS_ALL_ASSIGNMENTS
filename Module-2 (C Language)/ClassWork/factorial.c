// Find A FACTORIAL PROGRAM USING RECURSION FUNCTION
/*
	Formula :- n!=n*(n-1)
*/

#include<stdio.h>

int factFind(int num){ 
	if(num==1){
		return 1;
	}
	int f;
	//formula of factorial
	f=num*factFind(num-1); //5*ff(4)
	return f;
}
main()
{
	printf("\n Factorial is = %d",factFind(7)); //function call
}