//Practical - 5 ---> find a cube and square value 

#include<stdio.h>

int main()
{
	//Varaible Declaration
	int n,square,cube;
	
	//output message display on your terminal screen
	printf("Enter the Number:");
	scanf("%d",&n);
	
	//Calculation to perform the square and cube value
	square = n*n;
	printf("Square value is: %d",square);
	
	//cube value perform 
	cube = n*n*n;
	printf("\nCube Value is: %d",cube);
	return 0;
}