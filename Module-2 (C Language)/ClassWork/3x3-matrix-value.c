/*
	Aim :- Write a C program that stores 5 integers in a one-dimensional array and prints them. 
Part - 2 => Extend this to handle a two-dimensional array (3x3 matrix) and 
calculate the sum of all elements. 

*/

#include<stdio.h>
int main()
{
	int matrix[3][3],sum=0;
	int row,col;
	
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			printf("Enter the arry[%d][%d] matrix value: ",row,col);
			scanf("%d", &matrix[row][col]);
		}
	}
	
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			printf("\nMatrix value are: ");
			printf("%d",matrix[row][col]);
			sum = sum + matrix[row][col];
		}
		printf("\n");
	}
	printf("\n Sum of all array element: %d",sum);
	
	return 0;
}